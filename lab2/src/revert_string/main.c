#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "revert_string.h"

//argc - количество аргументов (включая имя программы)
//argv[] - массив строк-аргументов
//argv[0] - имя программы
//argv[1] - первый пользовательский аргумент (строка для переворота)

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s string_to_revert\n", argv[0]);
		return -1;
	}

	char *reverted_str = malloc(sizeof(char) * (strlen(argv[1]) + 1));//выделение памяти в куче
	//(длина строки + 1 ддя нуль-терминатора, 1 байт на симврл)
	strcpy(reverted_str, argv[1]);//копирование строки в выделенную память

	RevertString(reverted_str);//вызываем функцию

	printf("Reverted: %s\n", reverted_str);
	free(reverted_str);//освобождаем выделенную память
	return 0;
}

