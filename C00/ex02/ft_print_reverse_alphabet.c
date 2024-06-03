#include <unistd.h>
#include <stdlib.h>

void ft_print_reverse_alphabet(void)
{
    int cont;
    cont = 122;

    while(cont >= 97)
    {
        write(1,&cont,1);
        cont--;
    }
}

/*int main (void)
{
    ft_print_reverse_alphabet();

}*/