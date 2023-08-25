#include<stdio.h>
int main()
{
	int n;
	
	printf("enter the number of elements in an array: ");
	scanf("%d", &n);
	
	int a[n];
	printf("enter the elements in the array: ");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("\nEven numbers in the given array are: \n");
	for(int i=0; i<n; i++)
	{
		if(a[i]%2==0)
		printf("%d", a[i]);
	}
	
	printf("\nOdd numbers in the given array are: \n");
	for(int i=0; i<n; i++)
	{
		if(a[i]%2==1)
		printf("%d", a[i]);
	}
	
	return 0;
}
