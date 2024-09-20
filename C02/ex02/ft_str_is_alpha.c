#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        if( !(str[i] >= 'a' && str[i] <= 'z')  || !(str[i] >= 'A' && str[i] <= 'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {

    int n = 0;
    
    n = ft_str_is_alpha("afghgsdllg");
    printf("%d",n);
    
    return 0;
}