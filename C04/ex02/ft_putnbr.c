#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putnbr(int nb)
{
    char nbChar;

    if(nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    else if(nb < 0)
    {
        write(1,"-",1);
        nb = -nb;
    }
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
    }
    nbChar = nb % 10 + '0';
    write(1, &nbChar, 1);
    
}
/*int main(int argc, char *argv)
{
    int i = 2147483648;
    ft_putnbr(i);

    return 0;
}*/