//  PROGAME TO ADD NUMBERS FROM ONE TO A GIVEN NUMBER  
/*  
    assignment 1:
    question no.1:
*/
#include<stdio.h>
#include<conio.h>
int main()
{

int a,b=0,i;
printf("enter number till which u want sum: ");


scanf("%d",&a);
if(a<0)
{printf("please enter a positive number");
}
else
{{for(i=0;i<=a;i++)
b=b+i;}
printf("your sum=%d",b);
}
return 0;
}