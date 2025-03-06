#include<stdio.h>
void checkEvenOdd(int num)
{
    if(num%2==0)
    printf("Even number\n");
    else
    printf("Odd number\n");
}
int main()
{
int number;
printf("Enter any number=");
scanf("%d",&number);
checkEvenOdd(number);
return 0;
}