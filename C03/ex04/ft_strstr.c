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

char *ft_strstr(char *str, char *to_find)
{
    int i, j,y;
    i = 0;
    j = contador(to_find);
    y = 0;
    while(str[i] != '\0')
    {
        if(str[i] == to_find[y])
            y++;
        else if( j == y)
            return to_find;
        else
            y = 0;
        i++;
    }
    return NULL; 
}
/*
int main(int argc, char *argv)
{
    char haystack[] = "Hola, Mundo jroitj rijt!";
    char needle[] = " M";

    char *resultado = ft_strstr(haystack, needle);

    if (resultado != NULL) {
        printf("Subcadena encontrada: %s\n", resultado);  // Imprime: "Mundo!"
    } else {
        printf("Subcadena no encontrada.\n");
    }
    return 0;
}*/