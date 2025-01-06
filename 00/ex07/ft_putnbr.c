#include <unistd.h>
#define INT2CHAR 48

int get_reversed_number(int nb){
  int reversed_nb = 0;

  while(nb > 0)
    {
      int mod = nb % 10;
      reversed_nb = reversed_nb * 10 + mod;
      nb = nb / 10;
    }

  return reversed_nb;
}

void ft_putnbr(int nb){

  nb = get_reversed_number(nb);

  while(nb > 0){
    int mod = nb % 10;
    mod = mod + INT2CHAR;
    write(1, &mod, 1);
    nb = nb / 10; 
  }
}

int main(){
  ft_putnbr(185);
  return 0;
}
