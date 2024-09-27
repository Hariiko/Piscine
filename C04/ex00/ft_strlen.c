#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

/*int main(int argc, char *argv)
{
    int i = ft_strlen("aaaaaaa");
    printf("%d",i);
    return 0;
}*/