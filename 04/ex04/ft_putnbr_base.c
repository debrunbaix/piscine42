#include <stdio.h>
#include <unistd.h>

#define PLUS_SIGN 43
#define MINUS_SIGN 45

int ft_strlen(char *str){
  int i = 0;

  while (str[i] != '\0')
    i++; 

  return i;
}

int ft_has_repeated_char(char *base){
    int i = 0;
    int j = 0;

    for (i = 0; base[i] != '\0'; i++) {
        for (j = 0; base[j] != '\0'; j++){
            if (base[i] == base[j] && i != j)
                return 1;
        } 
    }

    return 0;
}

int ft_has_sign_char(char *base){
    int i = 0;

    for (i = 0; base[i] != '\0'; i++){
        if (base[i] == PLUS_SIGN || base[i] == MINUS_SIGN) 
            return 1;
    }

    return 0;
}

int ft_is_base_valid(char *base, int base_len){
    int has_sign = ft_has_sign_char(base);
    int has_repeated = ft_has_repeated_char(base);

    if (!has_sign && !has_repeated && base_len > 1)
        return 1;

    return 0;
}

void ft_convert_number_to_base(int nbr, char *base, int base_len){
    if (nbr < 0) {
        write(1, "-", 1);
        nbr = -nbr;
    }
    if (nbr >= base_len)
        ft_convert_number_to_base(nbr/base_len, base, base_len);
    write(1, &base[nbr % base_len], 1);
}

void ft_putnbr_base(int nbr, char *base){
  int base_len = ft_strlen(base);

  if (ft_is_base_valid(base, base_len))
      printf("Base valide\n");
  else
      printf("Base non valide\n");

  ft_convert_number_to_base(nbr, base, base_len);
}

int main(){
  ft_putnbr_base(24, "01");

  return 0;
}
