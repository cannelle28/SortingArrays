#include <stdio.h>
#include <stdlib.h>

void wczytajTab(int n, int *tab);

int main()
{
    int n;
    printf("Podaj liczbe elementow: ");
    scanf("%d", &n);
    int tab[n];
    wczytajTab(n, &tab);
    bubbleSort(n, &tab);
    printf("\n\n");
    wyswietlTab(n, &tab);

    return 0;
}

void bubbleSort(int n, int *tab)
{
  int i, j, temp;

  for (i = 0 ; i < ( n - 1 ); i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (tab[j] > tab[j+1])
      {
        temp = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = temp;
      }
    }
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
