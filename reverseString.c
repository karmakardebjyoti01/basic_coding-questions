#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int len,i;

    printf("Enter a string for reversal : \n");
    gets(str);

    len = strlen(str);
    printf("Reversed String :\n");
    for(i=len-1; i>=0;i--)
    {
        printf("%c",str[i]);
    }

    printf("\n");
}
