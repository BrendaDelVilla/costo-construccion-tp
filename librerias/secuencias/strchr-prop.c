#include "secuencias.h"

char *strrchrProp(const char *str, int c)
{
    const char *ultimo = NULL;

    while (*str != '\0')
    {
        if (*str == (char)c)
        {
            ultimo = str;  // Guardamos la direcci�n actual si hay coincidencia
        }
        str++;  // Avanzamos el puntero
    }

    // Considerar el caso en que c sea '\0'
    if ((char)c == '\0')
    {
        return (char *)str;  // str apunta al car�cter nulo al salir del while
    }

    return (char *)ultimo;
}

char *strchrProp(const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == (char)c)
            return (char *)str;
        str++;  // avanzar el puntero
    }

    // Si el car�cter buscado es el nulo '\0', tambi�n se considera v�lido
    if ((char)c == '\0')
        return (char *)str;

    return NULL;
}
