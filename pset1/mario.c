#include<stdio.h>
#include<cs50.h>
int main()
{
    int i,j,l,k;
    start:
    printf("Enter height you want\n");
    scanf("%d",&i);
    if(i<=23 && i>=0)
    {
    for(j=1;j<=i;j++)
    {
        for(l=i-j;l>0;l--)
        {
            printf(" ");
        }
        for(k=1;k<=j;k++)
        {
            printf("#");
        }
        printf(" ");
         for(k=1;k<=j;k++)
        {
            printf("#");
        }

        printf("\n");
    }

}
else
goto start;
return 0;
}
