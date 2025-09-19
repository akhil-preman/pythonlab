#include<stdio.h>
int main()
{
	int array[50];
	int n;
	int sum=0;
	printf("enter the size of an array : ");
	scanf("%d" , &n);
	
	if(n > 50)
	{
		printf("invalid input \n");
	}
	else
	{
		for(int i=0 ;i<n; i++)
		{
			printf("enter the element in index [%d] :", i);
			scanf("%d" , &array[i]);
		}
		for(int j=0; j< n; j++)
		{
			sum+=array[j];
		}
		printf("the sum of elements is %d \n", sum);
	}
	return 0;
}

