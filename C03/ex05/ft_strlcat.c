#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int counter(char *src)
{
    int i;
    
    i = 0;
    while(src[i] != '\0')
        i++;
    return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i, dest_len, src_len;

    i = 0;
    dest_len = counter(dest);
    src_len = counter(src);

    if (size <= dest_len) {
        return size + src_len;
    }

    while(src[i] != '\0' && dest_len < size - 1)
        dest[dest_len++] = src[i++];
    
    dest[dest_len] = '\0';

    return dest_len + src_len;
}

/*int main() {
    char dest[20] = "Hola";    // Buffer de destino
    char src[] = " Mundo";     // Cadena fuente
    unsigned int size = sizeof(dest); // Tamaño del buffer de destino

    // Concatenar src a dest de manera segura
    unsigned int result = ft_strlcat(dest, src, size);
    
    // Imprimir resultado y longitud total
    printf("Resultado: %s\n", dest); // Imprime "Hola Mundo"
    printf("Longitud total: %u\n", result); // Imprime longitud total esperada

    return 0;
}
*/