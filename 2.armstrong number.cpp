#include<stdio.h>
int main()
{
	int num,n,rem,result=0;
	printf("Enter the number:");
	scanf("%d",&num);
	n=num;
	while(n!=0)
	{
	rem=n%10;
	result+=rem*rem*rem;
	n/=10;
}
if(result==num)
{
	printf("Armstrong number");
}
else
{
	printf("Not a armstrong number");
}

}
