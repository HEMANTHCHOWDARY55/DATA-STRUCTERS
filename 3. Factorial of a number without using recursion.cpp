#include<stdio.h>
int main()
{
	int fact=1, n;
	
	printf("enter the value of n: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	
	printf("\nThe factorial of %d is: %d", n, fact);
	
	return 0;
}
