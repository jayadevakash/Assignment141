#include <stdio.h>

int NUMIP;
int RES;
int main()
{

printf("Enter the Number:");
scanf("%d", &NUMIP);

RES=NUMIP%2;

printf("%d\n", RES);

if (RES==0)
{
printf("EVEN");
}
else{
printf("ODD");
}
}
