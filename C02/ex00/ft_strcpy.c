#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


char *ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;
    while(src[i] != '\0')
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
    return dest;
}

/*int main()
{
    char *b = "hola";
    char *a = (char*)malloc(6* sizeof(char));
    if(a == NULL)
    {
        return 1;
    }
    
    a = ft_strcpy(a,b);
    printf("%s",a);
    free(a);
    
    return 0;
} */