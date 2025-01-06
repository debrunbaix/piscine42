#include <unistd.h>
#define INT2CHAR 48

void ft_putchar(char c){
  write(1, &c, 1);
}

void ft_print_numbers(void){
  int num = 0;

  while (num < 10) {
    ft_putchar(num + INT2CHAR);
    num++;
  }
}

int main(){
  ft_print_numbers();
  return 0;
}
