#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int array_random(int arr[], int u)
{
    srand(time(NULL));
    for (size_t i = 0; i < u; i++)
    {
        arr[i] = rand() % 50;
    }
}

int arrayprint(int *massiv[], int *size)
{
    printf("sonlar\n");
    for (size_t i = 0; i < *size; i++)
    {
        printf("%d ", *(massiv + i));
    }
}
int main () {
        int n;
    printf("n: ");
    scanf("%d", &n);
    int serya[n];
    int *ptr = serya;
    int juft = 0, orta = 0;

    array_random(serya, n);
    arrayprint(&serya, &n);

    printf("\n juft sonlar \n");
    for (size_t i = 0; i < n; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            printf("%d ", *(ptr + i));
            juft ++;
            orta = orta + *(ptr + i);
        }
        
    }
    printf("\njuft sonlar soni %d\n", juft);
    printf(" %d", orta);
    orta = orta / juft;
    printf("\njuft sonlar orta arifmetigi ==> %d", orta);

    
    return 0;
}