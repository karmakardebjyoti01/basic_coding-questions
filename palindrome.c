#include<stdio.h>
int main()
{
    int n,temp,sum=0,digit;

    printf("Enter the number : \n");
    scanf("%d", &n);

    temp=n;
    while(n>0)
    {
        digit=n%10;
        sum=(sum*10)+digit;
        n=n/10;
    }

    if(temp==sum)
    {
        printf("PALINDROME NUMBER");
    }
    else{
        printf("NOT PALINDROME");
    }
}
