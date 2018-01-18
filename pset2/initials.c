#include<stdio.h>
#include<string.h>
#include<cs50.h>
int main()
{
    printf("Enter the string");

    int i;
        string s = get_string();


    char str1[100];

    str1[0]=s[0];

    int x,l=1;
    x=strlen(s);
    for(i=1;i<x-1;i++)
    {
        if(s[i]==' ')
        {
            str1[l]=s[i+1];

            l++;
        }
    }
    str1[l]='\0';
    for(i=0;i<l;i++)
    {if(str1[i]>90)
    {str1[i]=str1[i]-32;
        printf("%c",str1[i]);
    }
    else

        printf("%c",str1[i]);
    }
    return 0;

}
