#define START_LOW 97
#define END_LOW 122

#define UP_CASE 32

char *ft_strupcase(char *str){

  for (int i = 0; str[i] != '\0'; i++) {

    int is_lowcase = (START_LOW <= str[i]) && (str[i] <= END_LOW);

    if (is_lowcase) 
      str[i] = str[i] - UP_CASE;
  }

  return str;
}
