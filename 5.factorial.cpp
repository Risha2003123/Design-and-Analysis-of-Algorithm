#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("Enter the required number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("Factorial:%d",fact);
	return 0;
}
