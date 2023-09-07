#include <stdio.h>
#include <math.h>

int main() {
	int T, N, i, j, k = 0, s, t, u, n, ss;
	long a[101][3] = {};
	float b[200000] = {}, max;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		for (j = 0; j < N; j++) {
			scanf("%d %d", &a[j][0], &a[j][1]);
		}
		for (s = 0; s < N - 2; s++) {
			for (t = s + 1; t < N - 1; t++) {
				for (u = t + 1; u < N; u++) {
					ss = abs((a[t][0] - a[s][0]) * (a[u][1] - a[s][1]) - (a[u][0] - a[s][0]) * (a[t][1] - a[s][1]));
					b[k++] = 0.5 * ss;
				}
			}
		}
		max = b[0];
		for (n = 1; n < N * (N - 1) * (N - 2) / 6; n++) {
			if (max < b[n])
				max = b[n];
		}
		printf("%.1f\n", max);
		for (int p = 0; p < 200000; p++)
			b[p] = 0;
		k = 0;
	}
	return 0;
}