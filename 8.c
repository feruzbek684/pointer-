#include <stdio.h>

int is(int son) { 
    if (son < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= son; i++) {
        if (son % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

void print(int *arr, int size) {
    printf("Array ichidagi tub sonlar: ==>  ");
    for (int i = 0; i < size; i++) {
        if (is(*(arr + i))) { 
            printf("%d\n", *(arr + i)); 
        }
    }
}

int main() {
    int arr[10] = {5, 74, 87, 5, 23, 65, 11, 3, 69, 32};  
    int size = 10;  
    print(arr, size);

    return 0;
}