#include "revert_string.h"

void RevertString(char *str)
{
	int length = strlen(str);//длина строки
    for (int i = 0; i < length / 2; i++)
    {
        // Меняем местами симметричные элементы
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

