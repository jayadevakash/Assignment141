#include<stdio.h>
/*Add Digits of Number*/

int NUMIP;

int main()
{
int DIGIT_COUNT=0;

printf("Enter the Number:");
scanf("%d",&NUMIP);

while(NUMIP>0)
{
DIGIT_COUNT++;
NUMIP=NUMIP/10;
}
printf("OUTPUT:%d",DIGIT_COUNT);
}

