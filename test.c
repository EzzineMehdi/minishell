#include "minishell.h"

int is_whitespaces(char c)
{
    if (c == ' ')
        return (1);
    return (0);
}

int is_reserved_word(char *s)
{
    if (*s == '|' || *s = '<' || *s == '>')
        return (1);
    return (0);
}

char    get_next_token(char *s)
{
    static size_t   i;

    while (s[i] && !is_whitespaces(s[i]))
        i++;
    if (is_reserved_word(s + i))
        return (reserved_word(s, &i));
    return (word(s, &i));
}

int main()
{
    
    return (0);
}