#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    int j;

    i = 0;
    j = 0;
    
    while (src[j] != '\0') {
        j++;
    }

    if(size > 0)
    {  
        while(i < size-1 && src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }    
    return (j);
}
/*
int main(void)
{
    char src[] = "Hello, world!";
    char dest[6];  // Buffer limitado a 6 caracteres
    unsigned int result;

    result = ft_strlcpy(dest, src, sizeof(dest));

    printf("Dest: %s\n", dest);  // Mostrará "Hello"
    printf("Longitud de src: %u\n", result);  // Mostrará 13 (la longitud de "Hello, world!")

    return 0;
}*/