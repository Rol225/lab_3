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

	printf("\n�������� ���������� �� �����: ");
	while (scanf("%d", &distanceSchool) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("�������� ���������� �� ��������: ");
	while (scanf("%d", &distanceHospital) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("�������� ���������� �� �������� ����: ");
	while (scanf("%d", &distanceKindergarten) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("����� ����: ");
	while (scanf("%d", &numHouse) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("\n�����: "); scanf("%s", &houseStreet); while (getchar() != '\n');
}

void location::LocationViwe()
{
	printf("\n  ���������� �� �����: %d\n", distanceSchool);
	printf("  ���������� �� ��������: %d\n", distanceHospital);
	printf("  ���������� �� ������������: %d\n", distanceKindergarten);
	printf("  �������� �����: %s\n", houseStreet);
	printf("  ����� ����: %d\n", numHouse);
}
