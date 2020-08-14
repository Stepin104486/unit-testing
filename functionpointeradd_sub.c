#include<stdio.h>
int sum(int,int); // function including
int sub(int,int);
main()  //main function startes on here
{
int results,loop;
int (*functionpointer[1])(int,int); // function pointer declaration 
functionpointer[0]=sum; // passing sum number
functionpointer[1]=sub; // paasing function for substarct
for(loop=0;loop<2;loop++) // loop for printing all function results
{
results=(*functionpointer[loop])(10,20); // passing values function on here 10,20
printd("%d",results); // results printing on here but its not required for this project my understanding uprpose i wrote
}
}
int sum(int number1,int number2) // sum function written here
{
return number1+number2; // returns the results here
}

int sub(int number1,int number2) // sub function written on here 
{
return number1-number2; // return the resuts
}
