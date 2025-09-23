//array merging


#include<stdio.h>

void display_array(int array[], int n)
{
	printf("array elements are;");
	for(int i=0;i<n;i++)
	    printf("%d ",array[i]);
}

void sort(int array[],int n)
{
	for(int i=0;i<n;i++)
	{	
		for(int j=i+1;j<n;j++)
		{
			if(array[i] > array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main()
{
	int array1[10];int array2[10];int array3[20];
	int n1,n2,n3;
	
	printf("enter the size of array1");
	scanf("%d",&n1);
	if(n1<=10)
	{
	for(int i=0;i<n1;i++)
	     {
	        printf("enter the elements to be inserted to first array: [%d]",i);
	        scanf("%d",&array1[i]);
	     }
	 } 
	printf("enter the size of an array2");
	scanf("%d",&n2);
	if(n2<=10)
	{
	for(int j=0;j<n2;j++)
	     {
	        printf("enter the elements to be inserted to second array: [%d]",j);
	        scanf("%d",&array2[j]);
	     }
	 }
	 printf("\n displaying array1:");
	 display_array(array1,n1);
	 printf("\n");
	 
	 printf("\n displaying array2:");
	 display_array(array2,n2);
	 printf("\n");
	 
	 printf("\n sorted array1:");
	 sort(array1, n1);
	 display_array(array1,n1);
	 printf("\n");
	  
	 printf("\n sorted array2:");
	 sort(array2, n2);
	 display_array(array2,n2);
	 printf("\n");
}
