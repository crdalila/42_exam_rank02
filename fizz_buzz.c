# include <unistd.h>

void ft_putnbr(int number)
{ //porque write no escribe números desgraciadamente
    const char  *digits;

    digits = "0123456789";//creamos un array con todos los dígitos
    if (number > 9)
        ft_putnbr(number / 10);
    /*para escribir más de un dígito, hacemos una recursiva
    y dividimos entre 10 para quitar el último digito del número (123 -> 12)
    */
    write(1, &digits[number % 10], 1);
    /*El resto de 10 es para obtener el último dígito
    que antes hemos eliminado (123 -> 3)
    Ponerlo en el write es una forma de obtener dónde está ese dígito
    dentro del array que hemos puesto, en este caso (3 -> number[4]) */
}

int main(void)
{
    int i;
    
    i = 1; //porque nos lo piden del 1 al 100
    while (i <= 100)
    { //si el resto de una división es 0, es que es múltiplo de ese número
        if (i % 3 == 0 && i % 5 == 0) //si es divisible entre ambos
            write(1, "fizzbuzz", 8);
        else if  (i % 3 == 0) //si es entre 3
            write(1, "fizz", 4);
        else if (i % 5 == 0) //si es entre 5
            write(1, "buzz", 4);
        else //sino, escríbelo
            ft_putnbr(i);
        i++;
        write(1, "\n", 1);
    }
}