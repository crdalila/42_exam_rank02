#include <unistd.h>

int main(int argc, char *argv[])
{
    int     i;
    char    *str;
    
    if (argc != 2)
    { //verificar que hay al menos un argumento, si no, salto de línea
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    str = argv[1];
    while (str[i] == ' ' || str[i] == '\t') 
        i++;//mientras haya espacios y tabuladores, sigue recorriendo
    while (str[i] != ' ' && str[i] && str[i] != '\t')
    {//escribe cuando encuentres letras
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}