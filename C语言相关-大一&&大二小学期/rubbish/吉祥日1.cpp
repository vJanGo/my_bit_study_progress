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
  
  // ѭ������ÿһ��
  for (month = 1; month <= 12; month++) {
    for (day = 1; day <= 31; day++) 
	{// ��ʼ�� tm �ṹ��
    struct tm date = { 0 };
    date.tm_year = year - 1900;
    date.tm_mon = month - 1;
    date.tm_mday = day;

    // �� tm �ṹ��ת��Ϊʱ�������ת��Ϊ tm �ṹ��
    time_t timestamp = mktime(&date);
    struct tm *weekday = localtime(&timestamp);
    weekDay=weekday->tm_wday;
      // ��������Ǵ���
      if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day <= 31) 
	  {
        // ������������������գ��Ҹ���������к���2��4��6��8�е�һ�����֣�������Ǽ�����
        if (weekDay == 6 || weekDay == 0) {
          isGoodDay = (day % 10 == 2 || day % 10 == 4 || day % 10 == 6 || day % 10 == 8);
          if (isGoodDay) {
          	printf("����Ϊ%d,����Ϊ%d %d",weekDay,month,day);printf("\n");
            count++;
          }
        }
      }
      // ���������С��
      if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30) {
        // ������������������գ��Ҹ���������к���2��4��6��8�е�һ�����֣�������Ǽ�����
        if (weekDay == 6 || weekDay == 0) {
          isGoodDay = (day % 10 == 2 || day % 10 == 4 || day % 10 == 6 || day % 10 == 8);
          if (isGoodDay) {printf("����Ϊ%d,����Ϊ%d %d",weekDay,month,day);printf("\n");
            count++;
          }
        }
      }
      // ���������2��
      if (month == 2 && day <= 28) {
        // ������������������գ��Ҹ���������к���2��4��6��8�е�һ�����֣�������Ǽ�����
        if (weekDay == 6 || weekDay == 0) {
          isGoodDay = (day % 10 == 2 || day % 10 == 4 || day % 10 == 6 || day % 10 == 8);
          if (isGoodDay) {printf("����Ϊ%d,����Ϊ%d %d",weekDay,month,day);printf("\n");
          
            count++;
          }
        }
      }
    }
  }
  // ������
  printf("2023��ġ������ա���%d��",count);
}
