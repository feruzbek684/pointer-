#include <stdio.h>
#include <stdlib.h>
int main () {
    int a, b;
    printf("sonni kiritng: ");
    scanf("%d%d", &a, &b);
    int *ptr = &a;
    int *ptr1 = &b;
    int sum = *ptr + *ptr1;
    printf("yigindi ==> %d ", sum);
}