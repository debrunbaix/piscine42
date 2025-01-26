#include <stdio.h>

int ft_strlen(char *str){
  int i = 0;

  while (str[i] != '\0') {
    i++;
  }

  return i;
}

int ft_strncmp(char *s1, char *s2, int n){
  int i = 0;

  for (i = 0; i < n; i++) {
    if (s1[i] < s2[i])
      return -1;
    if (s1[i] > s2[i])
      return 1;
  }

  return 0;
}

char *ft_strstr(char *str1, char *str2){
  int i = 0;
  int str2_len = ft_strlen(str2);

  if (*str2 == '\0')
    return str1;
  if (ft_strlen(str2) > ft_strlen(str1))
    return 0;

  while (str1[i] != '\0') {
    int result = ft_strncmp(str1+i, str2, str2_len);
    
    if (result == 0)
      return str1+i;

    i++;
  }

  return 0;
}

int main() {
  char *haystack = "Hello friend";
  char *needle = "friend";

  char *result = ft_strstr(haystack, needle);

  if (result) {
      printf("La chaîne '%s' a été trouvée dans '%s' à l'adresse : %p\n", needle, haystack, (void *)result);
  } else {
      printf("La chaîne '%s' n'a pas été trouvée dans '%s'.\n", needle, haystack);
  }

  return 0;
}
