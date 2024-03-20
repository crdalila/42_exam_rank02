#include <stdio.h>
#include <libc.h>

int  ft_strlen(char *src)
{
    int i = 0;
    while (src[i])
        i++;
    return (i);
}

char	*ft_strdup(char *src)
{
    int len;
    int i;
    char    *duplicated;

    if (!src)
        return (NULL);
    len = ft_strlen(src);
    i = 0;
    duplicated = (char *)malloc((len + 1) * sizeof(char));
    if (!duplicated)
        return (NULL);
    while (i < len)
    {
        duplicated[i] = src[i];
        i++;
    }
    duplicated[i] = '\0';
    return (duplicated);
}
/*
int main(void)
{
    char    *src = "hi hi hello";
    char    *duplicated;

    duplicated = ft_strdup(src);
    printf("%s\n", duplicated);
    free (duplicated);
    return (0);
}*/