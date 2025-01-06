void ft_rev_int_tab(int *tab, int size){
  int i = 0;
  size--;

  while (i != size) {
    int temp = tab[i];

    tab[i] = tab[size];
    tab[size] = temp;

    i++;
    size--;
  }
}
