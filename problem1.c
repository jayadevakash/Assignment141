#include <stdio.h>

float NUM_A;/*First Number */

float NUM_B;/*Second Number*/

float RES;/*Result*/

char ENT;/*Option Entry*/

int main()
{

printf("Enter NUM A:");
scanf ("%f", &NUM_A);

printf("Enter NUM B:");
scanf("%f", &NUM_B);

RES=NUM_A+NUM_B;

printf("RES:%f\n",RES);

printf("Do you want to add again?:");
scanf("%c", &ENT);

while (ENT == 'Y')
{

printf("Enter Num A:");
scanf("%f", &NUM_A);

printf("Enter NUM B:");
scanf("%f", &NUM_B);

RES=NUM_A+NUM_B;
printf("DO you want to add again?:");
scanf("%c", &ENT);

printf("Do you want to add again?:");
scanf("%c", &ENT);

}
return 0.0;
}

