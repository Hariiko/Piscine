#include <unistd.h>
#include <stdlib.h>

void ft_print_numbers(void)
{
    int cont;
    cont = 48;

    while(cont <= 57)
    {
        write(1,&cont,1);
        cont++;
    }
}

/*int main (void)
{
     ft_print_numbers();

}*/