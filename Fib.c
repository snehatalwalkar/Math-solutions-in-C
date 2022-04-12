//Program to generate Fibonacci sequence for first hundred numbers 0,1,1,2,3... ie.  a,b,a,b,...
//Logic- a=a+b, b=b+a


#include<stdio.h>
int main()
{
	int a=0, b=1;
	do
	{
		printf("%d ",a);
		a=a+b;
		printf("%d ",b);
		b=b+a;

	}while(b<100);               //Counter update
		
				
return(0);
}


