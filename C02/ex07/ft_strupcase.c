#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char *ft_strupcase(char *str)
{
    int i;

    i=0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}

int main()
{
    char str[] = "ddd"; 
    char *cosa = ft_strupcase(str);

    printf("%s\n", cosa);

    return 0;
}