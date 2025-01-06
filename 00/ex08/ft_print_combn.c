#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_put_comb(int *comb, int n) {
    for (int i = 0; i < n; i++) {
        ft_putchar(comb[i] + '0'); 
    }
    if (comb[0] < (10 - n)) { 
        write(1, ", ", 2);
    }
}

void ft_generate_comb(int *comb, int n, int index, int start) {
    if (index == n) { 
        ft_put_comb(comb, n);
        return;
    }
    for (int i = start; i <= 9; i++) {
        comb[index] = i; 
        ft_generate_comb(comb, n, index + 1, i + 1); 
    }
}

void ft_print_combn(int n) {
    int comb[10]; 
    ft_generate_comb(comb, n, 0, 0);
}

int main() {
    ft_print_combn(3); 
    return 0;
}

