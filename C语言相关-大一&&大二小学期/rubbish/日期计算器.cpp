#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int year, month, day;

    printf("���������� (yyyy mm dd)��");
    scanf("%d %d %d", &year, &month, &day);

    // ��ʼ�� tm �ṹ��
    struct tm date = { 0 };
    date.tm_year = year - 1900;
    date.tm_mon = month - 1;
    date.tm_mday = day;

    // �� tm �ṹ��ת��Ϊʱ�������ת��Ϊ tm �ṹ��
    time_t timestamp = mktime(&date);
    struct tm *weekday = localtime(&timestamp);

    // ������ڼ�
    printf("������������ %d\n", weekday->tm_wday );

    return 0;
}

