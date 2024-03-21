//program to find the circumference and area of circle by taking radius as user input
#include<stdio.h>
#include<math.h>

#define pi 3.14
int main()
{
    float radius , circumference , area; //variable declaration

    //taking user input
    printf("\n Enter the radius of the circle :");
    scanf("%f", &radius);

    //applying basic formulas

    circumference = 2*pi*radius;
    area = pi*radius*radius;

    //output show
    printf("\n The Area will be : %.2f and the circumference will be : %.2f", area, circumference);

    return 0;
}