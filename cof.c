#include<stdio.h>
int main()
{
  int coffee,bru,total=0;
  scanf("%d%d",&coffee,&bru);
  bru=100-coffee;
  while(coffee>0)
  
     total=total+coffee;
     coffee=(bru*coffee)/100;
  }
  printf("%d",total);
 }
