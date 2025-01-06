#include <unistd.h>
#define INT2CHAR 48

void ft_putchar(char c){
  write(1, &c, 1);
}

void ft_print_comb2(void){
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++){
      for (int k = 0; k < 10; k++){
        for (int l = 0; l < 10; l++){
          if (!((i == k) && (j == l))){
            ft_putchar(i + INT2CHAR);
            ft_putchar(j + INT2CHAR);
            ft_putchar(' ');
            ft_putchar(k + INT2CHAR);
            ft_putchar(l + INT2CHAR);
            ft_putchar(',');
            ft_putchar(' ');
          }
        }
      }
    }
  }
}

int main(){
  ft_print_comb2();
  return 0;
}
