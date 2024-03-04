#include<stdio.h>
int main()
{
    int x,y; 
    char n;//variable declaration

    //taking the operator input
    printf("\n Enter the operation number : \n addition(+) \n subtraction(-) \n division(/) \n multiplication(*)\n");
    scanf("%c", &n);
    
    //taking two numbers input
    printf("\n Enter the two numbers x and y : ");
    scanf("%d",&x);
    scanf("%d",&y);

    

    //switch case to perform operations
    switch(n)
    {
        case '+':
            printf("Addition value is : %d",(x+y));
            break;
        
        case '-':
            printf("subtraction value is : %d",(x-y));
            break;

        case '/':
            printf("division value is : %d", (x/y));
            break;

        case '*':
            printf("multiplication value is : %d", (x*y));
            break;
    // in case when input doesn't match
        default :
            printf("INVALID");
            break;
    }

    return 0;
}