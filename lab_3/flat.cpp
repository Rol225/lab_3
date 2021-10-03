#define _CRT_SECURE_NO_WARNINGS
#include "flat.h"
#include <iostream>

void flat::Flat(int coin, int countRoom, int numFlat)
{
	coin = coin;
	countRoom = countRoom;
	numFlat = numFlat;
}

void flat::Flat_console()
{
	printf("\nВыберите стоимость квартиры: ");
	while (scanf("%d", &coin) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Выберите кол-во комнат: ");
	while (scanf("%d", &countRoom) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Номер квартиры: ");
	while (scanf("%d", &numFlat) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}
}

void flat::FlatViwe()
{
	printf("\n  Цена: %d\n", coin);
	printf("  Количество комнат: %d\n", countRoom);
	printf("  Номер квартиры: %d\n", numFlat);
}
