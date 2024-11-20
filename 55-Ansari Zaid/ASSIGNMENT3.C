/*
  Roll No.      :  55
  Student Name  :  Ansari Zaid
  Program Title :  To find the year is Leap Year or not

  Task Given By:
    - Roll No. of Assignee : 45
    - Assignee Name        : Faizan Shaikh
*/

#include <stdio.h>

// Function Declaration to check leap year
void leap_year(int year)
{
    // If a year is multiple of 400, then leap year
    if (year % 400 == 0){
        printf("%d is a leap year.\n", year);
    }
    // If a year is multiple of 100, then not a leap year
    else if (year % 100 == 0){
        printf("%d is not a leap year.\n", year);
    }
    // If a year is multiple of 4, then leap year
    else if (year % 4 == 0){
        printf("%d is a leap year.\n", year);
    }
    // Not leap year
    else
        printf("%d is not a leap year.\n", year);
}

int main()
{
    //Funtion calling
    leap_year(2024);
    leap_year(2002);
    leap_year(2008);

    return 0;
}

/*

OUTPUT
2024 is a leap year.
2002 is not a leap year.
2008 is a leap year.

*/
