//swapping of two numbers without using third variable
#include<stdio.h>
int main()
{
    int a,b; //variable declaration

    //taking user input
    printf("\n Enter the value of a and b :");
    scanf("%d%d", &a,&b);

    //printing those input as initial value
    printf("initial value of A = %d and initial Value of B = %d\n",a,b);

    //swapping without using third varibale
    a=a+b;
    b=a-b;
    a=a-b;

    //showing the output
    printf("final value of A : %d and final value of B : %d",a,b);

    return 0;

}