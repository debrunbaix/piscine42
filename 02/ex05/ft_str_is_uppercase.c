#define START_LOW 97
#define END_LOW 122

int ft_str_is_uppercase(char *str){
  int i = 0;

  while (str[i] != '\0'){
    if ((START_LOW <= str[i]) && (str[i] <= END_LOW))
      return 0;
    i++;
  }

  return 1;
} 
