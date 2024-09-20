#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 1;
    while(str[i] != '\0')
    {
        if(!(str[i] >= 'a' && str[i] <= 'z'))
        {
            return 0;
        }
        i++;
    }
    return 1;

}

/*int main(int argc, char *argv)
{
    int n;

    n = ft_str_is_lowercase("aaaa");

    printf("%d",n);

    return 0;
}*/