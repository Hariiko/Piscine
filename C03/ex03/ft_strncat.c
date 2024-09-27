#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int counter(char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
        i++;
    return i;
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i, j;

    i = 0;
    j = counter(dest);
    while(i < nb && src[i] != '\0' )
    {
        dest[j++] = src[i++];
    }
    dest[j] = '\0';
   return dest;
}

/*int main() {
    char dest[20] = "Hola";
    char src[] = " Mundo";
    
    ft_strncat(dest, src, 2);      
    printf("%s\n", dest); 
    return 0;
}
*/