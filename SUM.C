#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c,s,avg;
  printf("Please enter 3 numbers");
  scanf("%d%d%d",&a,&b,&c);
  s=a+b+c;
  avg = s/3;
  printf("\nSum is %d", s);
  printf("\nAverage is  %d",avg);
  return 0;
}