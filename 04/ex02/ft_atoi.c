#define HIGH_ASCII_NUM 57
#define LOW_ASCII_NUM 48
#define ASCII_MINUS 45

int ft_strlen(char *str){
  int i = 0;

  while (str[i] != '\0')
    i++; 

  return i;
}

int multiply_by_power_of_ten(int x, int n) {
    int result = x;

    for (int i = 0; i < n; i++)
        result *= 10;
    
    return result;
}

int char_to_int(char *int_find){
  int len = ft_strlen(int_find);
  int number = 0;
  int i = 0;

  for (i = 0; i < len; i++)
    number += multiply_by_power_of_ten(int_find[i], len - i - 1);

  return number;
}
int ft_atoi(char *str){
  int len = ft_strlen(str);
  int i = 0;
  int j = 0;
  int sign = 0;
  int number = 0;
  char int_find[64];
  
  for (i = 0; i < len; i++){
    if (str[i] == ASCII_MINUS) 
      sign++;
    if ((LOW_ASCII_NUM <= str[i]) && (str[i] <= HIGH_ASCII_NUM)){
      int_find[j] = str[i] - 48;
      j++;
    }
  }

  int_find[j] = '\0';

  number = char_to_int(int_find);

  if (sign % 2 == 1)
    number = number - number*2;

  return number;
}
