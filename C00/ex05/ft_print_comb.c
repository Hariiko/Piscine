#include <unistd.h>
#include <stdlib.h>

void ft_print_comb(void)
{
    int i = 48; //0
    int j;
    int r;
    while(i < 56) // 9
    {
        j =  i + 1; //1
        while(j < 57) //8
        {
            r = j + 1; //2
            while(r < 58) //7
            {
                write(1,&i,1);
                write(1,&j,1);
                write(1,&r,1);
                if(i < 55)
                {
                     write(1,", ",1);
                }
                r++;
                
            }
            j++;
        }
        
        i++;
    }
}

/*int main (void)
{
    ft_print_comb();
}*/