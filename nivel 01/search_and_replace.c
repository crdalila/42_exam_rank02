#include <unistd.h>

int main(int argc, char *argv[])
{
    char    *str;
    int     i;

    if (argc != 4)
    {
        write(1, "\n", 1);
        return (0);
    }
    str = argv[1];
    i = 0;
    while (str[i])
    {//ponemos el 0 porque si no no podemos compararlos, uno sería un char y el otro un puntero
        if (str[i] == argv[2][0])
            str[i] = argv[3][0];
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}