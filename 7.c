#include <stdio.h>
#include <stdlib.h>
int main () {
int a, b, c;
printf("sonlarni kiritng: ");
scanf("%d%d%d", &a, &b , &c);
int *ptr = &a;
int *ptr2 = &b;
int *ptr3 = &c;
float orta = 0;
orta = *ptr + *ptr2 + *ptr3;
orta = orta / 3;
printf("orta arifmetigi ==> %.2f", orta);
}