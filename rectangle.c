#include<stdio.h>
int main()
{
    float length,breadth,perimeter;

    printf("\n Enter the length of the rectangle :");
    scanf("%f", &length);

    printf("\n Enter the breadth of the rectangle :");
    scanf("%f", &breadth);

    perimeter = 2*(length+breadth);

    printf("\n The perimeter of the rectangle will be : %f", perimeter);

    return 0;
}