#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	size_t	check;//para saber si ha encontrado un caracter en s que esté en accept

	i = 0;
	j = 0;
	check = 0;
	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
				check = 1;
			j++;
		}
		if (check == 0) //si no has encontrado ninguna coincidencia, devuelve i
			return (i);
		i++;
	}
	return (i);
}