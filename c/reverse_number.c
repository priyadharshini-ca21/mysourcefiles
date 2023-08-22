#include<stdio.h>

int main()  {
     int a, reverse=0, reminder;
     printf("Enter a number: ");
     scanf("%d", &a);
        for(;a>0;)
          {
            reminder=a%10;
            reverse=reverse*10+reminder;
            a/=10;
           }
           printf("Reversed Number is %d\n",reverse);
     return 0;
}
