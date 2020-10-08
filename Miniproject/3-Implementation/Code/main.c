/**
*Program for parking ticket fare calculator
*This program is for generating fare for a vehicle parked in a parking slot along with its parking time.
*/
#include<stdio.h>
void main ()
{
  int car = 15, motorcycle = 10, van = 20, number, fare, hour1, minute1, hour2, minute2;
  char n;
  printf("Enter Vehicle Details A-car B-motorcycle C-van = "); ///User enters the vehicle Type
  scanf("%c", &n);
  printf("Enter Vehicle number = "); /// User enters the vehicle number
  scanf("%d", &number);
  printf("Enter the Vehicle In time = "); /// User enters the vehicle In time in 24hr format
  scanf("%d:%d", &hour1,&minute1);
  printf("Enter the Vehicle Out time = "); /// User enters the vehicle Out time in 24hr format
  scanf("%d:%d", &hour2,&minute2);
  /**
  *The system takes the inputs from the user and generates fare for them correspondingly
  */
  if (n == 'A')
    {
      fare = car * (hour2 - hour1); ///If the vehicle is car, fare for 1hour is Rs15
    }
  else if (n == 'B')
    {
      fare = motorcycle * (hour2 - hour1); ///If the vehicle is motorcycle, fare for 1hour is Rs10
    }
  else if (n == 'C')
    {
      fare = van * (hour2 - hour1); ///If the vehicle is van, fare for 1hour is Rs20
    }
    printf("_____________________________\n");
    printf("       RECEIPT\n");
    printf("Vehicle Type       : %c\n", n);
    printf("Vehicle Number     : %d\n", number);
    printf("Vehicle Entry Time : %02d:%02d\n", hour1,minute1);
    printf("Vehicle Exit Time  : %02d:%02d\n", hour2,minute2);
    printf("The fare is %dRs\n", fare);
    printf("Have a nice day!!!\n");
    printf("_____________________________");
  }
