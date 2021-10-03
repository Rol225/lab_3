#define _CRT_SECURE_NO_WARNINGS
#include "flat.h"
#include <iostream>

void flat::FlatСompletion(int coin_2, int countRoom_2, int numFlat_2)
{
	coin = coin_2;
	countRoom = countRoom_2;
	numFlat = numFlat_2;
}

void flat::FlatСompletion_console()
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

int flat::Out_coin()
{
	return coin;
}

int flat::Out_countRoom()
{
	return countRoom;
}

int flat::Out_numFlat()
{
	return numFlat;
}

