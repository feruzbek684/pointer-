#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    system("cls");
    srand(time(NULL));
    
    int index = 0;
    int sery[10]; 
    int *ptr = sery;
    for (int i = 0; i < 10; i++) {
        *(ptr + i) = rand() % 50;
    }
    printf("\nSonlar:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }
    int katta = sery[0];
    for (int i = 0; i < 10; i++) {
        if (katta < *(ptr + i)) {
            katta = *(ptr + i);
            index = i;
        }
    }
    printf("\n\n indexi [%d], katta son: %d", index, katta);
    index = index + 2;
    if (index < 10) {
        printf("\nIndex 2ga oshirilganda: %d\n", *(ptr + index));
    } else {
        printf("\nindex yoq\n");
    }

    return 0;
}
