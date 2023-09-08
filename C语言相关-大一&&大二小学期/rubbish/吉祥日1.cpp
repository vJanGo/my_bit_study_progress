#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int year = 2023;
  int month;
  int day;
  int weekDay=0;
  int count = 0;
  bool isGoodDay;
  
  // 循环遍历每一天
  for (month = 1; month <= 12; month++) {
    for (day = 1; day <= 31; day++) 
	{// 初始化 tm 结构体
    struct tm date = { 0 };
    date.tm_year = year - 1900;
    date.tm_mon = month - 1;
    date.tm_mday = day;

    // 将 tm 结构体转化为时间戳，再转化为 tm 结构体
    time_t timestamp = mktime(&date);
    struct tm *weekday = localtime(&timestamp);
    weekDay=weekday->tm_wday;
      // 如果该天是大月
      if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day <= 31) 
	  {
        // 如果该天是周六或周日，且该天的日期中含有2、4、6、8中的一个数字，则该天是吉祥日
        if (weekDay == 6 || weekDay == 0) {
          isGoodDay = (day % 10 == 2 || day % 10 == 4 || day % 10 == 6 || day % 10 == 8);
          if (isGoodDay) {
          	printf("星期为%d,日期为%d %d",weekDay,month,day);printf("\n");
            count++;
          }
        }
      }
      // 如果该天是小月
      if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30) {
        // 如果该天是周六或周日，且该天的日期中含有2、4、6、8中的一个数字，则该天是吉祥日
        if (weekDay == 6 || weekDay == 0) {
          isGoodDay = (day % 10 == 2 || day % 10 == 4 || day % 10 == 6 || day % 10 == 8);
          if (isGoodDay) {printf("星期为%d,日期为%d %d",weekDay,month,day);printf("\n");
            count++;
          }
        }
      }
      // 如果该天是2月
      if (month == 2 && day <= 28) {
        // 如果该天是周六或周日，且该天的日期中含有2、4、6、8中的一个数字，则该天是吉祥日
        if (weekDay == 6 || weekDay == 0) {
          isGoodDay = (day % 10 == 2 || day % 10 == 4 || day % 10 == 6 || day % 10 == 8);
          if (isGoodDay) {printf("星期为%d,日期为%d %d",weekDay,month,day);printf("\n");
          
            count++;
          }
        }
      }
    }
  }
  // 输出结果
  printf("2023年的“吉祥日”有%d天",count);
}
