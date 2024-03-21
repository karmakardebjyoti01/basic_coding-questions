//swapping of two numbers using third variable
#include<stdio.h>
int main()
{
    int a,b,c; //variable declaration

    //taking user input
    printf("\n Enter the value of a and b :");
    scanf("%d%d", &a,&b);

    //printing those input as initial value
    printf("initial value of A = %d and initial Value of B = %d\n",a,b);

    //swapping using third varibale
    c=a;
    a=b;
    b=c;

    //showing the output
    printf("final value of A : %d and final value of B : %d",a,b);

    return 0;

}