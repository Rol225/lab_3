﻿#define _CRT_SECURE_NO_WARNINGS
#include "flat.h"
#include "lab_3.h"

int main()
{
	//Подключение Русского языка
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int option = 0;

	do {
		printf("  1) Структура location\n  2) Структура flat\n  3) Структура street\n  4) Структура house\n  5) Выход\n");
		printf("Выберите действие: ");
		do {
			while (scanf("%d", &option) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}
			if (option > 5) {
				printf("\nОшибка. выбирете из допустимых значений: ");
			}
		} while (option > 5 || option <= 0);

		if (option == 1) {
			//FunckForLocation();
		}
		else if (option == 2) {
			FunckForFlat();
		}
		else if (option == 3) {
			//FunckForStreet();
		}
		else if (option == 4) {
			//FunckForHouse();
		}
	} while (option != 5);
}

void FunckForFlat() {
	int coin, countRoom, numFlat;
	int option = 0;
	flat flat;

	do {
		printf("\n\n  1) Заполнить через встроенную функцию\n  2) Заполнить через внешнюю функцию\n  3) Вывести информацию со структуры\n  4) Выход в главное меню\n");
		printf("Выберите действие: ");
		do {
			while (scanf("%d", &option) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}
			if (option > 3) {
				printf("\nОшибка. выбирете из допустимых значений: ");
			}
		} while (option > 3 || option <= 0);

		if (option == 1) {
			flat.Flat_console();
		}
		else if (option == 2) {
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

			flat.Flat(coin, countRoom, numFlat);
		}
		else if (option == 3) {
			flat.FlatViwe();
		}

	} while (option != 4);
}