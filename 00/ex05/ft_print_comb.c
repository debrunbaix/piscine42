#include <unistd.h>
#define INT2CHAR 48

void ft_putchar(char c){
  write(1, &c, 1);
}

void ft_print_comb(void){
  for (int i = 0; i < 10; i++) {
    for (int j = i+1; j < 10; j++) {
      for (int k = j+1; k < 10; k++) {
        ft_putchar(i + INT2CHAR);
        ft_putchar(j + INT2CHAR);
        ft_putchar(k + INT2CHAR);
        ft_putchar(',');
        ft_putchar(' ');
      }
    }
  }
}

int main(){
  ft_print_comb();
  return 0;
}
