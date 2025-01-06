#include <stdio.h>

#define START_LOW 97
#define END_LOW 122

#define UP_CASE 32

char *ft_strupcase(char *c) {
  if (*c >= START_LOW && *c <= END_LOW) {
    *c = *c - UP_CASE;
  }
  return c;
}

int str_split(char *str, char words[][20]) {
  int i = 0, j = 0, ctr = 0;

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ') {
      words[ctr][j] = '\0';
      ctr++;
      j = 0;
    } else {
      words[ctr][j] = str[i];
      j++;
    }
  }
  words[ctr][j] = '\0'; 
  return ctr + 1;      
}

void ft_strcapitalize(char *str) {
  char words[20][20]; 
  int num_words = str_split(str, words);
  char result[500];  
  int pos = 0;        

  for (int i = 0; i < num_words; i++) {
    if (words[i][0] != '\0') {
      ft_strupcase(&words[i][0]); 
    }

    for (int j = 0; words[i][j] != '\0'; j++) {
      result[pos] = words[i][j];
      pos++;
    }

    if (i < num_words - 1) {
      result[pos] = ' ';
      pos++;
    }
  }

  result[pos] = '\0'; 

  for (int i = 0; result[i] != '\0'; i++) {
    str[i] = result[i];
  }
  str[pos] = '\0'; 
}

int main() {
  char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

  ft_strcapitalize(str);

  printf("%s\n", str);

  return 0;
}

