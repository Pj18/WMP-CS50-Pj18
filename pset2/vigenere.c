#include<stdio.h>
#include<string.h>
#include<cs50.h>
int main(int argc,string argv[])
{
    if(argc!=1)
    {printf("Error");
    return 1;
    }
    int x,i,l,w,y,e;
    char str[100];

        printf("Enter the string as K\n");
    gets(str);
    x=strlen(str);
    for(i=0;i<x;i++)
    {
        if(isalpha(str[i]));
            else
            {

              return 1;

            }
    }
    char strr[100];
    printf("plaintext:");
    gets(strr);
    y=strlen(strr);
    int a[100];
    for(i=0;i<x;i++)
    {
        if(islower(str[i]))
        {
            a[i]=str[i]-97;

        }
        else
        {
            a[i]=str[i]-65;
        }
    }
    w=i;
    i=0;
    printf("ciphertext:");
    for(l=0;l<y;l++)
    {
        if(islower(strr[l]))
        {
            e=(((strr[l]+a[i])%97)%26)+97;
            printf("%c",e);
            i++;
        }
        else if(isupper(strr[l]))
        {
             e=(((strr[l]+a[i])%65)%26)+65;
            printf("%c",e);
            i++;
        }
        else
        {
            printf("%c",strr[l]);
        }
        if(i==w)
        {
          i=0;
        }

    }
    printf("\n");
    return 0;




}
