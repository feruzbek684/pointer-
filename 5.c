#include <stdio.h>
#include <stdlib.h>
int main () {
    int a, b, vaqt = 0;
    printf("sonlarni kiritng: ");
    scanf("%d%d", &a, &b);
    int *ptr = &a;
    int *ptr1 = &b;
    vaqt = a;
    a = b;
    b = vaqt;
    printf("\nalmashtirsh ==> %d", a);
    printf("\nalmashtirsh ==> %d", b);

    return 0;
}