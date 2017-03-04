#include <stdio.h>
#include <stdlib.h>

void wczytajTab(int n, int *tab);
void wyswietlTab(int n, int *tab);
void insertSort(int n, int *tab);

int main()
{    int n;
    printf("Podaj liczbe elementow: ");
    scanf("%d", &n);
    int tab[n];
    wczytajTab(n, &tab);
    insertSort(n, &tab);
    printf("\n\n");
    wyswietlTab(n, &tab);
    return 0;
}

void insertSort(int n, int *tab)
{
    int temp, i, j;

    for (i = 1; i < n; i++)
    {
        temp = tab[i];
        for (j = i - 1; j>=0 && tab[j]>temp; j--)
        {
            tab[ j + 1 ] = tab[ j ];
        }
        tab[ j + 1 ] = temp;
    }
}

void wyswietlTab(int n, int *tab)
{
    int i;
    for (i = 0; i < n; i++)
        printf("A[%d] = %d\n", i, tab[i]);
}

void wczytajTab(int n, int *tab)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &tab[i]);
    }
}

