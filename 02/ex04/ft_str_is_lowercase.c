#define START_UPPER 65
#define END_UPPER 90

int ft_str_is_lowercase(char *str){
  int i = 0;

  while (str[i] != '\0'){
    if ((START_UPPER <= str[i]) && (str[i] <= END_UPPER))
      return 0;
    i++;
  }

  return 1;
} 
