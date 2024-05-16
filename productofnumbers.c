#include <stdio.h>

int main()
{
    int num,p=1,rem,d;
    printf("enter the number :");
    scanf("%d",&num);
   
    while(num!=0)
    {
        d=num%10;
        p=p*d;
        num=num/10;
    }
    printf("product = %d",p);
    return 0;
}