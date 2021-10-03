#define _CRT_SECURE_NO_WARNINGS
#include "location.h"
#include <iostream>

void location::Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse)
{
	houseStreet[0] = 0;
	distanceSchool = distanceSchool;
	distanceHospital = distanceHospital;
	distanceKindergarten = distanceKindergarten;
	numHouse = numHouse;
	strcat(houseStreet, houseStreet);
}

void location::Location_console()
{
	memset(&houseStreet, 0, sizeof(houseStreet));

	printf("\nВыберите расстояние до школы: ");
	while (scanf("%d", &distanceSchool) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Выберите расстояние до больницы: ");
	while (scanf("%d", &distanceHospital) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Выберите расстояние до детского сада: ");
	while (scanf("%d", &distanceKindergarten) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Номер дома: ");
	while (scanf("%d", &numHouse) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("\nУлица: "); scanf("%s", &houseStreet); while (getchar() != '\n');
}

void location::LocationViwe()
{
	printf("\n  Расстояние до школы: %d\n", distanceSchool);
	printf("  Расстояние до больницы: %d\n", distanceHospital);
	printf("  Расстояние до детскогосада: %d\n", distanceKindergarten);
	printf("  Название улицы: %s\n", houseStreet);
	printf("  Номер дома: %d\n", numHouse);
}
