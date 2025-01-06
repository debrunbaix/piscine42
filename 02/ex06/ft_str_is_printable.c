#define START_PRINTABLE 32
#define END_PRINTABLE 126

int ft_str_is_printable(char *str){
  int i = 0;

  while (str[i] != '\0'){
    if (!(START_PRINTABLE <= str[i]) && (str[i] <= END_PRINTABLE))
      return 0;
    i++;
  }

  return 1;
}

