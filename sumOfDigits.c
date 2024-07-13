#include<stdio.h>
int main()
{
    int sum=0,i,digit,n;

    printf("Enter a number :\n");
    scanf("%d", &n);

    while(n!=0)
    {
        digit = n%10;
        sum = sum + digit;
        n = n/10;
    }

    printf("Sum of Digits of the number : %d", sum);

}
