#include<stdio.h>
#include"prime.h"

int prime_function(int number)
{
int loop;
for(loop=2;loop<number;loop++)
if(number%2==0)
break;
if(loop=number)
return 1;
else
return -1;
}
