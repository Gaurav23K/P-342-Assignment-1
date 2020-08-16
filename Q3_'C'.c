//  PROGRAMME TO FIND THE SUM OVER 1 + 1/2 + 1/3 .... TILL THE SUM DOES NOT CHANGE BY MORE THAN 0.001 
/*  
    assignment 1:
    question no.3:
*/
#include<stdio.h>
#include<math.h>
int main() {
double sum = 0;
double num=1;
double diff=1/num;

while(diff>0.001)
	{
	sum = sum + diff;
	diff = 1/++num;
	}
printf("The sum is: %f",sum);
return 0;
}