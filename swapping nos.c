#include<stdio.h>
void main()
{
	int a=0,b=0;
	printf("enter two no.s to be swapped :\n");
	//to take input
	scanf("%d %d",&a,&b);
	//to swap the given numbers
	a=a+b;
	b=a-b;
	//b=(a+b)-b = a
	a=a-b;
	//a=(a+b)-a = b
	//to print the swapped no.s
	printf("no.s after swapping are %d,%d",a,b);
}
