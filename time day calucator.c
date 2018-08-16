#include<stdio.h>
#include<time.h>

int leapYearFeb(int year, int mon) //Leap year checking
{
    int flag = 0;
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            if (mon == 2)
            {
                flag = 1;
            }
        }
    }
    else if (year % 4 == 0)
    {
        if (mon == 2)
        {
            flag = 1;
        }
    }
    return (flag);
}

int main(void)
{
    int daysInMon[] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};  //Days in month
    int days, month, year;
    char dob[100];
    time_t ts;
    struct tm *ct;

    days=8;
    month=6;
    year=1991;
    printf("\nDate of Birth: %d/%d/%d", days, month, year);

    ts = time(NULL);   //Find the current month
    ct = localtime(&ts);
    printf("\nCurrent Date: %d/%d/%d",ct->tm_mday, ct->tm_mon + 1, ct->tm_year + 1900);
    days = daysInMon[month - 1] - days + 1;

    if (leapYearFeb(year, month)) //Checking the given year Leap or not
    {
        days = days + 1;
    }

    /*Calculating the num of year, month and date*/
    days = days + ct->tm_mday;
    month = (12 - month) + (ct->tm_mon);
    year = (ct->tm_year + 1900) - year - 1;

    if (leapYearFeb((ct->tm_year + 1900), (ct->tm_mon + 1)))
    {
        if (days >= (daysInMon[ct->tm_mon] + 1))
        {
            days = days - (daysInMon[ct->tm_mon] + 1);
            month = month + 1;
        }
    }
    else if (days >= daysInMon[ct->tm_mon])
    {
        days = days - (daysInMon[ct->tm_mon]);
        month = month + 1;
    }

    if (month >= 12)
    {
        year = year + 1;
        month = month - 12;
    }

    /*Result portion*/

    printf("\nAge: %d year %d months and %d days", year, month, days);
    return 0;
  }
