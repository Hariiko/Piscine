#include <unistd.h>
#include <stdlib.h>

void ft_print_alphabet(void)
{
    int cont;
    cont = 97;

    while(cont <= 122)
    {
        write(1,&cont,1);
        cont++;
    }
}

/*int main (void)
{
    ft_print_alphabet();

}*/