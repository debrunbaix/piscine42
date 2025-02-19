#include <stdio.h>

int ft_strlen(char *str){
  int i = 0;

  while (str[i] != '\0')
    i++; 

  return i;
}

void ft_putnbr_base(int nbr, char *base){
  int base_len = ft_strlen(base);

  if (base_len <= 1)
    
  
}

int main(){
  int nbr = 42;

  ft_putnbr_base(42, "0123456789ABCDEF");

  return 0;
}
