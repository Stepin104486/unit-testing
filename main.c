#include<stdio.h>
#include "prime.h"
int main(void)
{
int number;
int returnnumber;
scanf("%d",&number);
returnnumber =prime_function(number);
if(returnnumber == 1)
  printf("Prime Number");
else
  printf("Not Prime")
return 0;
}
