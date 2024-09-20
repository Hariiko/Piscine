#include <stdio.h>
#include <unistd.h>
#include <stdio.h>


char *ft_strcapitalize(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        if(j == 0 && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 32;
            j++;
        }
        else if (j > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[i] = str[i] + 32;
            j++;
        }
       else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
       {
            j = 0;
       }
       else
       {
            j++;
       }
        i++;
    }

    return str;
}


/*int main(int argv, char *argc)
{
    char str[] = "7a atr WEEEEE erra+er + er-a";
    char *cosa = ft_strcapitalize(str);

    printf("%s\n", cosa);

    return 0;
}*/