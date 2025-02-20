#include <stdio.h>

#define ASCII_MINUS 45
#define ASCII_PLUS 43

// Fonction pour obtenir la longueur d'une chaîne
int ft_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// Vérifie si la base contient des caractères répétés
int ft_has_repeated_char(char *base) {
    int i, j;
    for (i = 0; base[i] != '\0'; i++) {
        for (j = i + 1; base[j] != '\0'; j++) {
            if (base[i] == base[j])
                return 1;
        }
    }
    return 0;
}

// Vérifie si la base contient '+' ou '-' ou des espaces
int ft_has_invalid_char(char *base) {
    int i = 0;
    while (base[i] != '\0') {
        if (base[i] == ASCII_PLUS || base[i] == ASCII_MINUS || base[i] == ' ')
            return 1;
        i++;
    }
    return 0;
}

// Vérifie si la base est valide
int ft_is_base_valid(char *base) {
    int base_len = ft_strlen(base);
    if (base_len < 2 || ft_has_invalid_char(base) || ft_has_repeated_char(base))
        return 0;
    return 1;
}

// Convertit une chaîne en entier
int ft_atoi(char *str) {
    int i = 0, sign = 1, number = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) // Espaces et tabulations
        i++;

    while (str[i] == ASCII_MINUS || str[i] == ASCII_PLUS) {
        if (str[i] == ASCII_MINUS)
            sign *= -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        number = number * 10 + (str[i] - '0');
        i++;
    }

    return number * sign;
}

// Convertit un nombre en une base et stocke le résultat dans un buffer
void ft_convert_number_to_base(int nbr, char *base, int base_len, char *buffer, int *pos) {
    if (nbr >= base_len)
        ft_convert_number_to_base(nbr / base_len, base, base_len, buffer, pos);
    buffer[(*pos)++] = base[nbr % base_len]; 
}

// Fonction principale qui convertit un nombre en base 10 vers une autre base
char *ft_atoi_base(char *str, char *base) {
    static char converted_number[64];
    int number, base_len, pos = 0;

    base_len = ft_strlen(base);
    if (!ft_is_base_valid(base))
        return NULL;

    number = ft_atoi(str);

    if (number < 0) { 
        converted_number[pos++] = '-';
        number = -number;
    }
    
    ft_convert_number_to_base(number, base, base_len, converted_number, &pos);

    converted_number[pos] = '\0';
    
    return converted_number;
}

int main() {
    char *converted_number;

    converted_number = ft_atoi_base("42", "0123456789abcdef");
    printf("Résultat : %s\n", converted_number);

    return 0;
}
