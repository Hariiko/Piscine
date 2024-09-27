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
    int i, j,to_find_len;
    
    i = 0;
    to_find_len = contador(to_find);



    if (to_find_len == 0) {
        return (char *)str; 
    }

    while (str[i] != '\0') 
    {
        j = 0;
        while (j < to_find_len && str[i + j] != '\0') 
        {
            if (str[i + j] != to_find[j]) 
            {
               break; 
            }
            j++;
        }

        if (j == to_find_len) {
            return (char *)&str[i];
        }
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