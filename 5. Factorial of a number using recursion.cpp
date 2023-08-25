#include<stdio.h>
#include<conio.h>
int main()
{
    int num,f,clrc,factorial(int);
    printf("\n  Enter the number: ");
    scanf("%d",&num);
     
    f=factorial(num);
    printf("\n  The factorial of the number %d is %d",num,f);
    getch();
}
int factorial(int number)
{
	int fact;
    if(number==0 || number==1)
        return 1;
    else
        return(number * factorial(number-1));
}
