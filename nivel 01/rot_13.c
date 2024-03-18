#include <unistd.h>

int main(int argc, char *argv[])
{
    char    *str;
    int     i;
    if (argc == 2)
    {
        str = argv[1];
        i = 0;
        while (str[i])
        {
            if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
            {//para que vaya 13 caracteres por delante
                str[i] = str[i] + 13;
            }
            else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
            {//si sumanos 13 nos vamos a caracteres no alfabéticos, así que lo restamos
                str[i] = str[i] - 13; 
            }
            write(1, &str[i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    write(1, "\n", 1);
    return (0);
}