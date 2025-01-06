#include <stdio.h>

void ft_sort_int_tab(int *tab, int size){
  for (int i = 1; i < size; i++) {
    int val = tab[i];
    int j = i - 1;

    while ((j >= 0) && (val < tab[j])) {
      tab[j + 1] = tab[j];
      j--;
    }

    tab[j + 1] = val;
  }
}

int main(){
  int tab[5] = { 2, 5, 3, 4, 1};

  ft_sort_int_tab(tab, 5);

  for (int i = 0; i < 5; i++) {
    printf("%d\n", tab[i]);
  }
}
