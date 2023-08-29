#include<stdio.h>
int main()
{
	int size,i,largest;
	printf("Enter the range:");
	scanf("%d",&size);
	int array[size];
	printf("\nEnter the elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	largest=array[0];
	for(i=0;i<size;i++)
	{
		if(largest<array[i])
		{
			largest=array[i];
		}
	}
	printf("Largest element : %d",largest);
}
