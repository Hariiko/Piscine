#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    
    i=0;
    while(i < n)
        dest[i++] = src[i];
    
    dest[i] = '\0';
    printf("%s\n", dest);
    return dest;
}

/*int main() {
    char dest[20];
    char src[] = "Hola ggggg g g g g g";
    ft_strncpy(dest, src, 10);
    return 0;
}*/