#include <stdio.h>

#define START_UP 65
#define END_UP 90

#define LOW_CASE 32

char *ft_strlowcase(char *str){

  for (int i = 0; str[i] != '\0'; i++) {

    int is_upcase = (START_UP <= str[i]) && (str[i] <= END_UP);

    if (is_upcase) 
      str[i] = str[i] + LOW_CASE;
  }

  return str;
}

int main(){
  char str[] = "24__Hello";

  ft_strlowcase(str);

  printf("%s\n", str);
}
