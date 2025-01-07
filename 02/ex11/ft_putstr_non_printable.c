#include <unistd.h>

#define N_PRINTABLE_LOW 0
#define N_PRINTABLE_TOP 31

void ft_putchar(char c){
  write(1, &c, 1);
}

void ft_put_hex(char c){
  char *hex_digit = "0123456789abcdef";

  ft_putchar(hex_digit[c / 16]);
  ft_putchar(hex_digit[c % 16]);
}

void ft_putstr_non_printable(char *str){
  int i;

  for (i = 0; str[i] != '\0'; i++){
    if ((N_PRINTABLE_LOW <= str[i]) && (str[i] <= N_PRINTABLE_TOP)){
      ft_putchar('\\');
      ft_put_hex(str[i]);
    } else {
      ft_putchar(str[i]);
    }
  }
}

int main(){
  char str[] = "Coucou\ntu \tvas bien ?";

  ft_putstr_non_printable(str);

  return 0;
}
