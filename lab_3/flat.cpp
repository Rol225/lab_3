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
