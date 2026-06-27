# include<stdio.h>
int main()
{
int a=7,b=15;
printf("before swapping %d,%d\n",&a,&b);
a,b=b,a;
printf("after swapping %d,%d\n",a,b);
return 0;
}