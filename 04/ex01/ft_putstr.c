#include <unistd.h>

int ft_strlen(char *str){
  int i = 0;

  while (str[i])
    i++;

  return i;
}

void ft_putstr(char *str){
  int len = ft_strlen(str);

  write(1, str, len);
}

int main(){
  char str[] = "Sasha";

  ft_putstr(str);

  return 0;
}
