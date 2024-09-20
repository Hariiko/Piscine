#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

/*int main(int argc, char *argv)
{

    int n = 0;
    
    n = ft_str_is_numeric("   45");
    printf("%d",n);
    
    return 0;
}*/