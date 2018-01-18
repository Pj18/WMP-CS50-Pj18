#include<stdio.h>
#include<cs50.h>
int main()
{
    int i,j,l,k;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        for(l=i-j;l>=0;l--)
        {
            printf(" ");
        }
        for(k=1;k<=j;k++)
        {
            printf("*");
        }
        printf(" ");
         for(k=1;k<=j;k++)
        {
            printf("*");
        }

        printf("\n");
    }

}
