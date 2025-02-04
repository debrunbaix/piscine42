#include <stdio.h>

#define LOW_ASCII_NUM 48
#define HIGH_ASCII_NUM 57
#define ASCII_MINUS 45

int ft_strlen(char *str){
  int i = 0;

  while (str[i] != '\0')
    i++; 

  return i;
}

int ft_atoi(char *str){
  int len = ft_strlen(str);
  int i = 0;
  int sign = 0;
  
  for (i = 0; i < len; i++){
    if (str[i] == ASCII_MINUS) 
      sign++;
    if (LOW_ASCII_NUM <= str[i] <= HIGH_ASCII_NUM)
      // str[i] - 48;
    

  }

  if (sign % 2 == 1)
    sign = 1;
  // Pour chaque caractère :
  //   s'il y a un "-":
  //     le mettre au début
  // pour chaque caractères :
  //   si c'est un nombre:
  //     l'ajouter
  //   
}

int main(){
  char str[] = "Sas--ha1234";

  int test = ft_atoi(str);

  printf("%d\n", test);

  return 0;
}
