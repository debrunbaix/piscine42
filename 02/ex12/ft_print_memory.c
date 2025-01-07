#include <unistd.h>
#include <stdio.h>

#define N_PRINTABLE_LOW 0
#define N_PRINTABLE_TOP 31

void ft_putchar(char c){
  write(1, &c, 1);
}

unsigned int ft_sizeof(char *src){
  int i;
  for (i = 0; src[i] != '\0'; i++);
  return i;
}

void ft_print_line(char *str){
  int j = 0;

  while (j < 16) {
    if(str[j] <= N_PRINTABLE_TOP) {
      ft_putchar('.');
      printf("!!");
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
    /* printf("%p: ", addr+16*i); */
    ft_print_line(ptr);
    ptr += 16;
    printf("\n");
  }

  if (rest){
    while (j < rest) {
      printf("%c", ptr[j]);
      j++;
    }
    printf("\n");
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

