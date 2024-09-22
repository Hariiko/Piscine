#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int contador (char *s1)
{
    int i;

    i = 0;
    while(s1[i] != '\0')
        i++;
    return i;
}
int ft_strcmp(char *s1, char *s2)
{
    int cont1, cont2, i;
    
    i = 0;
    cont1 = contador(s1);
    cont2 = contador(s2);

    if(cont1 == cont2)
    {
        while(s1[i] != '\0')
        {
            if(s1[i] != s2[i])
            {
                return -1;
            }
            i++;
        }
        return 0;
    }
    return -1;
}


/*int main (int argc, char *argv)
{
    char str1[] = "Hola";
    char str2[] = "Hola";
    char str3[] = "Mundo";
    char str4[] = "Holaa";

    int resultado1 = ft_strcmp(str1, str2);  // Devuelve 0 porque son iguales
    int resultado2 = ft_strcmp(str1, str3);  // Devuelve un valor negativo (H < M)
    int resultado3 = ft_strcmp(str1, str4); 
    
    printf("Resultado1: %d\n", resultado1);  // Imprime: 0
    printf("Resultado2: %d\n", resultado2);  // Imprime un número negativo
    printf("Resultado2: %d\n", resultado3);

    return 0;
}*/