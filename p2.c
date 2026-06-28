# include<stdio.h>
int main()
{
int a=7,b=15;
int temp;
printf("before swapping %d,%d\n",&a,&b);
temp=a;
a=b;
b=temp;
printf("after swapping %d,%d\n",a,b);
return 0;
}