#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int year = 2023;
  int month;
  int day;
  int weekDay;
  int count = 0;
  bool isGoodDay;
  
  // 循环遍历每一天
  for (month = 1; month <= 12; month++) {
    for (day = 1; day <= 31; day++) {
      // 如果该天是大月
      if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day <= 31) {
        weekDay = (weekDay + day) % 7;
        // 如果该天是周六或周日，且该天的日期中含有2、4、6、8中的一个数字，则该天是吉祥日
        if (weekDay == 6 || weekDay == 0) {
          isGoodDay = (day % 10 == 2 || day % 10 == 4 || day % 10 == 6 || day % 10 == 8);
          if (isGoodDay) {
            count++;
          }
        }
      }
      // 如果该天是小月
      if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30) {
        weekDay = (weekDay + day) % 7;
        // 如果该天是周六或周日，且该天的日期中含有2、4、6、8中的一个数字，则该天是吉祥日
        if (weekDay == 6 || weekDay == 0) {
          isGoodDay = (day % 10 == 2 || day % 10 == 4 || day % 10 == 6 || day % 10 == 8);
          if (isGoodDay) {
            count++;
          }
        }
      }
      // 如果该天是2月
      if (month == 2 && day <= 28) {
        weekDay = (weekDay + day) % 7;
        // 如果该天是周六或周日，且该天的日期中含有2、4、6、8中的一个数字，则该天是吉祥日
        if (weekDay == 6 || weekDay == 0) {
          isGoodDay = (day % 10 == 2 || day % 10 == 4 || day % 10 == 6 || day % 10 == 8);
          if (isGoodDay) {
            count++;
          }
        }
      }
    }
  }
  // 输出结果
  printf("2023年的“吉祥日”有%d天",count);
}
