#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

/*int main()
{
    char *c = "Hello";
    printf("%d", ft_strlen(c));
    
}*/