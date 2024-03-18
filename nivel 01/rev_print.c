#include <unistd.h>

int main(int argc, char *argv[])
{
    int     len; //para el strlen
    char    *str; //para guardar el argv[1]
    int     i; //contador

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    len = 0;
    str = argv[1];
    while (str[len])
        len++;
    while (i <= len)
    {//len -1 es el último caracter del str (sin contar el nulo)
        write(1, &str[(len - 1) - i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
