#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_LEAVES 24
#define GROUP_SIZE 4
#define MAX_DIFFERENCE 10.0

typedef struct {
    int leafIndices[NUM_LEAVES];
    double fitness;
} Individual;

double leafMass[NUM_LEAVES];

void initializePopulation(Individual population[], int populationSize) {
    int i, j;
    for (i = 0; i < populationSize; i++) {
        for (j = 0; j < NUM_LEAVES; j++) {
            population[i].leafIndices[j] = j;
        }
        for (j = NUM_LEAVES - 1; j > 0; j--) {
            int k = rand() % (j + 1);
            int temp = population[i].leafIndices[j];
            population[i].leafIndices[j] = population[i].leafIndices[k];
            population[i].leafIndices[k] = temp;
        }
        population[i].fitness = 0.0;
    }
}

void evaluateFitness(Individual population[], int populationSize) {
    int i, j, k;
    for (i = 0; i < populationSize; i++) {
        double groupMass[NUM_LEAVES / GROUP_SIZE] = {0.0};
        for (j = 0; j < NUM_LEAVES; j++) {
            int groupIndex = j / GROUP_SIZE;
            groupMass[groupIndex] += leafMass[population[i].leafIndices[j]];
        }
        double maxDifference = 0.0;
        for (k = 0; k < NUM_LEAVES / GROUP_SIZE - 1; k++) {
            double difference = abs(groupMass[k] - groupMass[k + 1]);
            if (difference > maxDifference) {
                maxDifference = difference;
            }
        }
        population[i].fitness = -maxDifference;
    }
}

void selectParents(Individual population[], int populationSize, Individual parents[], int numParents) {
    int i, j, maxIndex;
    for (i = 0; i < numParents; i++) {
        maxIndex = 0;
        for (j = 1; j < populationSize; j++) {
            if (population[j].fitness > population[maxIndex].fitness) {
                maxIndex = j;
            }
        }
        parents[i] = population[maxIndex];
        population[maxIndex].fitness = -10000000;
    }
}

void crossover(Individual parent1, Individual parent2, Individual *child) {
    int i, crossoverPoint;
    crossoverPoint = rand() % NUM_LEAVES;
    for (i = 0; i < crossoverPoint; i++) {
        child->leafIndices[i] = parent1.leafIndices[i];
    }
    for (i = crossoverPoint; i < NUM_LEAVES; i++) {
        child->leafIndices[i] = parent2.leafIndices[i];
    }
}

void mutate(Individual *individual, double mutationRate) {
    int i, j;
    for (i = 0; i < NUM_LEAVES; i++) {
        if ((double)rand() / RAND_MAX < mutationRate) {
            int j = rand() % NUM_LEAVES;
            int temp = individual->leafIndices[i];
            individual->leafIndices[i] = individual->leafIndices[j];
            individual->leafIndices[j] = temp;
        }
    }
}

void evolvePopulation(Individual population[], int populationSize, double mutationRate) {
    int i;
    Individual parents[2];
    Individual child;

    for (i = 0; i < populationSize; i++) {
        selectParents(population, populationSize, parents, 2);
        crossover(parents[0], parents[1], &child);
        mutate(&child, mutationRate);
        population[i] = child;
    }
}

Individual findBestSolution(Individual population[], int populationSize) {
    int i, maxIndex = 0;
    for (i = 1; i < populationSize; i++) {
        if (population[i].fitness > population[maxIndex].fitness) {
            maxIndex = i;
        }
    }
    return population[maxIndex];
}

int main() {
    srand(time(NULL));
    int populationSize = 100;
    double mutationRate = 0.01;
    int numGenerations = 1000;

    // 初始化扇叶质量
    // ...

    // 初始化种群
    Individual population[populationSize];
    initializePopulation(population, populationSize);

    int generation;
    for (generation = 0; generation < numGenerations; generation++) {
        // 评估适应度
        evaluateFitness(population, populationSize);

        // 进化种群
        evolvePopulation(population, populationSize, mutationRate);
    }

    // 查找最佳解
    Individual bestSolution = findBestSolution(population, populationSize);

    // 输出最优分组方式
    printf("最优分组方式：\n");
    for (int i = 0; i <NUM_LEAVES;i++) {
        int groupIndex = bestSolution.leafIndices[i] / GROUP_SIZE;
        printf("第%d个扇叶所属组:%d\n", i + 1, groupIndex + 1);
    }

    return 0;
}

