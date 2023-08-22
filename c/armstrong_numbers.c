#include<stdio.h>

int main()   {
    int n,r,val=0,num;
    printf("Enter the Value:");
    scanf("%d",&n);
    num=n;
       while(n>0)
         {
           r=n%10;
           val=val+(r*r*r);
           n=n/10;
         }
       if(num==val)
       printf("%d is armstrong  number \n",val);
       else
       printf("%d is not armstrong number \n",val);
    return 0;
    }
