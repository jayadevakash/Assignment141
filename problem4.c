#include <stdio.h>

int PRIME;

int main()

{
printf("ENTER THE NUMBER");
scanf("%d", &PRIME);

if ((PRIME%=2)==0){
printf("NOT PRIME NUMBER");
}

if ((PRIME%=3)!=0)
{

printf("PRIME NUMBER");

}
}
