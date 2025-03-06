#include<stdio.h>
void swap(int a,int b){
int temp=a;
a=b;
b=temp;
printf("Inside function after swapping: n1=%d,n2=%d\n",a,b);

}
int main()
{
    int n1,n2;
    printf("Enter two numbers=");
    scanf("%d %d",&n1,&n2);
    printf("Before function call: n1=%d,n2=%d\n",n1,n2);
    swap(n1,n2);
    return 0;
}
