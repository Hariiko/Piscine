#include <unistd.h>
#include <stdlib.h>

void	ft_print_combn(int n)
{
	int i = 48;
	int j = 49;

	while(i < 58)
	{
		int j = i +1;
		while(j < 58)
		{
			write(1,&i,1);
			write(1,&j,1);
            if(i != 56 || j != 57)
            {
			    write(1,", ",1);
            }
            j++;
		}
		i++;
	}
}

/*int main(void)
{
    ft_print_combn(2);
    return 0;
}*/