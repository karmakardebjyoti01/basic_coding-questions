#include<stdio.h>
int factorial(int n)
{
    int fact = 1;
    for(int i=n; i>0; i--)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int a;
    printf("Enter the number for factorial :");
    scanf("%d", &a);
    int x = factorial(a);
    printf("Factorial will be : %d", x);
}
