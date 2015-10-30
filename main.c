/*LAB 1 Q6 */

/* ------------------------------------------------------------

Programmer: Aleena Chaudhry

ID: B00074979

Date: 19th September 2014

Purpose:Reads 20 integers and counts the number of even and odd numbers enterd.

------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int array[20];
   int i,n;


    for(i=0; i<20;i++){
       printf("Enter value:");
       scanf("%d",&array[i]);
    }

printf("Even numbers in the array are - ");

      for(i=0;i<20;i++)

     {
         if(array[i]%2==0)

           {

                 printf("%d\t",array[i]);

           }

     }

     printf("\n Odd numbers in the array are - ");

     for(i=0;i<20;i++)

     {

           if(array[i]%2!=0)

           {

                 printf("%d\t",array[i]);

           }

     }


    return 0;
}
