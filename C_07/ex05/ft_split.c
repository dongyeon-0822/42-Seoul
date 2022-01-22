#include <stdlib.h>

int count_word(char *str)
{
    int cnt;
    cnt = 0;

    while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
        str++;
    if (*str && (*str != ' ' && *str != '\t' && *str != '\n'))
    {
        cnt++;
        while (*str && (*str != ' ' && *str != '\t' && *str != '\n'))
            str++;   
    }
    return (cnt);
}

char *malloc_word(char *str){
    char *word;
    int i;
    i = 0;
    while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		i++;
    word = (char *)malloc (sizeof(char) + (i+1));
    i = 0;
    while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		word[i] = str[i];
		i++;
	}
    word[i] = '\0';
    return (word);
}

char **ft_split(char *str)
{
    int i;
    int words;
    char **tab;

    words = count_word(str);
    tab = (char**) malloc (sizeof(char *) * (words +1));
    i = 0;
    while (*str){
        while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
            str++;
        if (*str && (*str != ' ' && *str != '\t' && *str != '\n'))
        {    
            tab[i] = malloc_word(str);
            i++;
            while (*str && (*str != ' ' && *str != '\t' && *str != '\n'))
                str++; 
        }
    }
    tab[i] = NULL;
    return (tab);
}