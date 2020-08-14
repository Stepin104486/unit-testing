#include<stdio.h>
int sum(int,int);
int sub(int,int);
main()
{
int results,loop;
int (*functionpointer[1])(int,int);
functionpointer[0]=sum;
functionpointer[1]=sub;
for(loop=0;loop<2;loop++)
{
results=(*functionpointer[loop])(10,20);
}
}
int sum(int number1,int number2)
{
return number1+number2;
}

int sub(int number1,int number2)
{
return number1-number2;
}
