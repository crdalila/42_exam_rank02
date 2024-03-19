#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	while (s[i])
	{
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char *s = "Hello";
	char *reject = "abcdd";

	printf("%zu\n", ft_strcspn(s, reject));
	return (0);
}

La función strcspn busca el primer carácter en la cadena s que
también está presente en la cadena reject.
Una vez que encuentra este carácter, devuelve la posición de este
carácter en la cadena s.

Por ejemplo, si tenemos la cadena original "Hello" y la cadena
de rechazo "abcdd", la función strcspn buscará el primer carácter
de "Hello" que también está presente en "abcdd".
En este caso, el primer carácter de "Hello" es 'H', y este
carácter no está presente en "abcdd". Por lo tanto, strcspn
devuelve la posición del primer carácter de "Hello", que es 0.

Por ejemplo, si s es "Hello" y reject es "abdcl",
el resultado será 3 porque la l está en la posición 3 del s*/