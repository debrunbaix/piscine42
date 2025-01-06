#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
  int i = 0;

  while (i < n) {
    printf("%c\n", src[i]);
    dest[i] = src[i];
    i++;
  }

  dest[i] = '\0';

  return dest;
}

int main(){
  char src[] = "Hello, World!"; 
  char dest[30];               

  ft_strncpy(dest, src, 29); 

  printf("Source: %s\n", src);
  printf("Destination: %s\n", dest);

  return 0;
}
