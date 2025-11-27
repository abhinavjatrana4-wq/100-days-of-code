// Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main()
{
int a , b;
printf(" enter two numbers\n ");
scanf("%d%d" ,&a,&b);              
printf("a=%d,b=%d\n",a,b);         
a = a+b ;                          
b = a-b ;
a = a-b ; 
printf("after swapping\n");
printf("a=%d,b=%d",a,b);           
return 0; 
}