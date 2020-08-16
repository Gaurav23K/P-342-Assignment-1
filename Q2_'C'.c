//  PROGRAMME TO FIND FACTORIAL OF A GIVEN NUMBER  
/*  
    assignment 1:
    question no.2:
*/
#include<stdio.h>
#include<conio.h>
int main()
{

int a,b=1,i;
printf("Enter an integer: ");


scanf("%d",&a);
if(a<0)
{printf("Please enter a positive integer");
}
else
{{for(i=1;i<=a;i++)
b=b*i;}
printf("Factorial of the given number is: %d",b);
}
return 0;
}
