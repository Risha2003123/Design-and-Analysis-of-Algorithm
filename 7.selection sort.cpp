#include<stdio.h>
int main()
{
	int size,i,j,k,position,swap;
	printf("Enter the range:");
	scanf("%d",&size);
	printf("\nThe elements are:");
	int array[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	for(j=0;j<(size-1);j++)
	{
		position=j;
	}
	for(k=j+1;k<size;k++)
	{
		if(array[position]>array[k])
		{
			position=k;
		}
	if(position!=j)
	{
		swap=array[j];
		array[j]=array[position];
		array[position]=swap;
	}
}
for(j=0;j<size;j++)
{
	printf("%d\t",array[j]);
	return 0;
}
}
