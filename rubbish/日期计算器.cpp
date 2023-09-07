#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int year, month, day;

    printf("请输入日期 (yyyy mm dd)：");
    scanf("%d %d %d", &year, &month, &day);

    // 初始化 tm 结构体
    struct tm date = { 0 };
    date.tm_year = year - 1900;
    date.tm_mon = month - 1;
    date.tm_mday = day;

    // 将 tm 结构体转化为时间戳，再转化为 tm 结构体
    time_t timestamp = mktime(&date);
    struct tm *weekday = localtime(&timestamp);

    // 输出星期几
    printf("该日期是星期 %d\n", weekday->tm_wday );

    return 0;
}

