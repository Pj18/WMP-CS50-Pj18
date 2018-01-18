#include<stdio.h>
#include<cs50.h>

int main()
{

    float i,count=0;
    start:
    printf("Enter the change");
    scanf("%f",&i);
    if(i>=0.0)
    {

    while(i>=0.009)
    {

        if(i>=0.25)
        {
            count++;
            i=i-0.25;

        }
        else if(i>=0.09)
        {

            count++;
            i=i-0.10;
            }
        else if(i>=0.049)
        {

            count++;
            i=i-0.05;

        }
        else if(i>0.009 && i<0.05)
        {

            count++;
            i=i-0.01;
        }



    }
    printf("%f\n",count);
}
else
goto start;
}
