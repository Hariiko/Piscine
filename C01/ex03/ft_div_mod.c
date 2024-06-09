#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
        *div = a / b;
        *mod = a % b;
}


/*int main ()
{
    int div;
    int mod;

    ft_div_mod(2,0,&div,&mod);

    printf("%d", div);
    printf("%d", mod);
}*/