#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int contador(char *s1)
{
    int i;

    i = 0;
    while(s1[i] != '\0')
        i++;
    return i;
}

char *ft_strcat(char *dest, char *src)
{
   int i, j;

    i=0;    
    j = contador(dest);

   while(src[i] !=  '\0')
       dest[j++] = src[i++];

   return dest;
}

/*int main(int argc, char *argv)
{
    char dest[20] = "Hola,  dd d d ";  // La cadena de destino debe ser lo suficientemente grande
    char src[] = "Mundo!";

    ft_strcat(dest, src);  // Concatenar "Mundo!" a "Hola, "
    printf("%s\n", dest);  // Imprime: "Hola, Mundo!"
    return 0;
}*/