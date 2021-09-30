#include<stdio.h>
int main()
{
      int a,b,temp;
      printf("enter two numbers");
      scanf("%d%d",&a,&b);
       printf("a : %d,b : %d\n",a,b);
      temp=a;
      a=b;
      b=temp;
      printf("a : %d,b : %d\n",a,b);
      return 0;
}
