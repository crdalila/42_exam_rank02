#include <unistd.h>

void    repeat_alpha(char *str)
{
    int     i;
    char    base_char; //caracter base: para calcular su posición en alfabeto
    int     count; //el número de veces que se repite el caracter

    i = 0;
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                base_char = 'a'; //si es minúscula
            else
                base_char = 'A'; //si es mayúscula
            count = str[i] - base_char + 1;
            /*nos da la distancia entre el carácter actual y el carácter base en términos de
            su posición en el alfabeto. Por ejemplo, si str[i] es 'c' y base_char es 'a',
            entonces str[i] - base_char sería 2. Le sumamos 1 para que coincida con el número
            de repeticiones que queremos*/
            while (count > 0)
            {
                write(1, &str[i], 1);
                count--; //le restamos hasta que llegue a 0
            }
        }
        else //si no es una letra, escríbelo normal
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write (1, "\n", 1);
        return (0);
    }
    repeat_alpha(argv[1]);
    write (1, "\n", 1);
    return (0);
}