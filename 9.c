#include <stdio.h>
#include <stdlib.h>
int main () {
    int sonlar[5] = {10,20,30,40,50};
    int sum = 0;
    int *p = sonlar;
    for (size_t i = 0; i < 5; i++)
    {
        sum = sum + *(p + i);
    }
    printf("yigindi ==> %d\n", sum);
    return 0;
}