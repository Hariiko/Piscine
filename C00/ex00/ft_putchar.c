#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

/*int main(void) {
   ft_putchar('c');
}*/