#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 *
 */
int _isalpha(int l)
{
         if (((l >= 'a') && (l <= 'z')) || ((l >= 'A') && (l <= 'z')))
                 return (1);
         else
                 return (0);
}
