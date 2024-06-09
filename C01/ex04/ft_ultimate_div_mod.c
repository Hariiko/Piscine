#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;

    *a = div;
    *b = mod;
}

/*int main()
{
    int a = 4;
    int b = 3;

    printf("%d",a);
    printf("%d",b);

    ft_ultimate_div_mod(&a,&b);

    printf("%d",a);
    printf("%d",b);
}*/