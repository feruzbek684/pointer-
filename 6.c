#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int array[10];
    int *ptr = array;
    printf("sonlar    ");
    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &(*(ptr + i)));
    }

    for (size_t i = 0; i < 10; i++)
    {
     printf("%d ", *(ptr + i));   
    }
    
    printf("\n\n  7 ga 3ga 5ga bolinadigan sonlar ==> ");

    for (size_t j = 0; j < 10; j++)
    {
        if (*(ptr + j) % 7 == 0 && *(ptr + j) % 3 == 0 && *(ptr + j) % 5 == 0)
        {
            printf("%d ", *(ptr + j));
        }
    }
}