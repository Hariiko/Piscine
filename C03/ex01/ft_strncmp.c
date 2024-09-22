#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;
    while(i <= n - 1)
    {
        printf("%c", s1[i]);
        if(s1[i] != s2[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}

/*
int main(int argc, char *argv)
{
    char str1[] = "HolaMundo";
    char str2[] = "Hokkkkla";

    // Compara los primeros 4 caracteres de ambas cadenas
    int resultado1 = ft_strncmp(str1, str2, 4);  // Devuelve 0 porque "Hola" == "Hola"
    
    // Compara los primeros 6 caracteres de ambas cadenas
    int resultado2 = ft_strncmp(str1, str2, 6);  // Devuelve un número positivo porque 'M' > 'A'

    printf("Resultado1: %d\n", resultado1);  // Imprime: 0 (iguales hasta los 4 primeros caracteres)
    printf("Resultado2: %d\n", resultado2);  // Imprime un número positivo


    return 0;
}
*/