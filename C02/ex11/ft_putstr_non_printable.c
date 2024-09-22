#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void ft_putchar(char c)
{
    write(1,&c,1);
}

void	ft_conver_hex(char c)
{
	char *hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 0 && str[i] <= 32 || str[i] == 127)
        {
            ft_conver_hex(str[i]);
        }
        else
        {
            ft_putchar(str[i]);
        }
        i++;
    }

}

/*int main (int argv, char *argc)
{

    ft_putstr_non_printable("¡Hola! ¿Cómo estás hoy?");
    return 0;
}
*/