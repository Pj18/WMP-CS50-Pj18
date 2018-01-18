#include<stdio.h>
#include<string.h>
int main()
{
    int k,i,c,x,j,v,m,l,e;
    printf("Enter k by which you want to shift the number");
    scanf("%d",&k);
    printf("\n");
    char str[100];
    printf("plaintext:");
    gets(str);
    gets(str);
    printf("\n");
    x=strlen(str);
    printf("ciphertext:");
    for(i=0;i<x;i++)
    {
        if(isupper(str[i]))
        {
            v=str[i];
            m=v+k;
            if(m>=65 && m<=90)
            {
                printf("%c",m);
            }
            else if(k>90)
            {
                while(m>90 || m<65)
                {
                    l=m-90;
                    e=64+l;
                    m=e;
                }
                    printf("%c",m);

            }

        }
        else if(islower(str[i]))
        {


            v=str[i];
            m=v+k;

            if(m>=97 && m<=122)
            {
                printf("%c",m);
            }
            else if(m>122)
            {
                while(m>122 || m<97)
                {
                    l=m-122;
                    e=96+l;
                    m=e;
                }
                    printf("%c",m);

    }

        }
        else
        {
            printf("%c",str[i]);
        }





    }printf("\n");
}
