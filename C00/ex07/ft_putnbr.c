#include <unistd.h>
#include <stdlib.h>

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else
    {
        if (nb < 0)
        {
            write(1, "-", 1);
            nb = -nb;
        }
        if (nb >= 10)
        {
            ft_putnbr(nb / 10);
        }
        write(1, &"0123456789"[nb % 10], 1);
    }
}

int main(void)
{
    ft_putnbr(-8453);
    return 0;
}
