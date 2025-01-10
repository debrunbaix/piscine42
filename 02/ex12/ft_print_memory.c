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

unsigned int ft_sizeof(char *src){
  int i;
  for (i = 0; src[i] != '\0'; i++);
  return i;
}

void ft_print_addr_text(char *str){
  unsigned long addr = (unsigned long)str; 
  unsigned char byte;
  int i;

  for (i = (sizeof(addr) * 2) - 1; i >= 0; i--) {
      byte = (addr >> (i * 4)) & 0xF; 
      ft_put_hex(byte);              
  }

  ft_putchar(':'); 
  ft_putchar(' ');
}

void ft_print_hex_text(char *str, int size){
  int i = 0;
  while (i < 16) {
    ft_put_hex(str[i]);
    if (i % 2){
      ft_putchar(' ');
    }
    i++;
  }
  ft_putchar(':');
  ft_putchar(' ');
}

void ft_print_clear_text(char *str, int size){
  int j = 0;

  while (j < 16) {
    if (str[j] <= N_PRINTABLE_TOP) {
      ft_putchar('.');
    } else {
      ft_putchar(str[j]);
    }
    j++;
  }
}

void *ft_print_memory(void *addr, unsigned int size) {
  unsigned char *ptr = (unsigned char *)addr; 

  int lines = size / 16, rest = size % 16;
  unsigned int i = 0, j = 0;
  
  for (i = 0; i < lines; i++){
    ft_print_addr_text(ptr);
    ft_print_hex_text(ptr, 16);
    ft_print_clear_text(ptr, 16);
    ptr += 16;
    ft_putchar('\n');
  }

  if (rest){
    ft_print_addr_text(ptr);
    ft_print_hex_text(ptr, rest);
    ft_print_clear_text(ptr, rest);
    ft_putchar('\n');
  }
  return addr;
}

int main(void)
{
  char test1[] = "Bonjour les amiches. C'est fou tout ce qu'on peut faire avec print_memory.\nLOL.";
  unsigned int size1 = ft_sizeof(test1);

  ft_print_memory(test1, size1);

  return 0;
}
