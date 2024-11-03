#include <stdio.h>
#include <stdlib.h>
int main () {
    int a, b, c, ozgaruvchi;
    printf("sonni kiritng: ");
    scanf("%d%d%d", &a, &b, &c);
    int *ptr = &a;
    int *ptr1 = &b;
    int *ptr2 = &c;
    int sum = *ptr + *ptr1 + *ptr2;
    ozgaruvchi = a;
    a = c;
    c = b;
    b = ozgaruvchi;
    printf("a ning qiymati ==> %d\n",a);
    printf("b ning qiymati ==> %d\n",b);
    printf("c ning qiymati ==> %d\n",c);

    return 0;
}