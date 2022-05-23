#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *one;
    list_t *two;
    list_t lord = {"Jesus", 5, NULL};
    size_t n;

    one = &lord;
    two = malloc(sizeof(list_t));
    if (two == NULL)
    {
        printf("Error\n");
        return (1);
    }
    two->str = strdup("lord");
    two->len = 5;
    two->next = one;
    one = two;
    n = print_list(one);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(two->str);
    two->str = NULL;
    n = print_list(one);
    printf("-> %lu elements\n", n);

    free(two);
    return (0);
}
