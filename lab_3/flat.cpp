#define _CRT_SECURE_NO_WARNINGS
#include "flat.h"
#include <iostream>

void flat::Flat�ompletion(int coin_2, int countRoom_2, int numFlat_2)
{
	coin = coin_2;
	countRoom = countRoom_2;
	numFlat = numFlat_2;
}

void flat::Flat�ompletion_console()
{
	printf("\n�������� ��������� ��������: ");
	while (scanf("%d", &coin) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("�������� ���-�� ������: ");
	while (scanf("%d", &countRoom) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("����� ��������: ");
	while (scanf("%d", &numFlat) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
}

void flat::FlatViwe()
{
	printf("\n  ����: %d\n", coin);
	printf("  ���������� ������: %d\n", countRoom);
	printf("  ����� ��������: %d\n", numFlat);
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

