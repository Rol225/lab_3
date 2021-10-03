#define _CRT_SECURE_NO_WARNINGS
#include "street.h"
#include <iostream>

void street::Street(char streetName_2[], char streetDescription_2[])
{
	memset(&streetName, 0, sizeof(streetName));
	memset(&streetDescription, 0, sizeof(streetDescription));

	strcat(streetName, streetName_2);
	strcat(streetDescription, streetDescription_2);
}

void street::Street_console()
{
	memset(&streetName, 0, sizeof(streetName));
	memset(&streetDescription, 0, sizeof(streetDescription));

	printf("\nУлица: "); scanf("%s", &streetName); while (getchar() != '\n');
	printf("Описание улици: "); gets_s(streetDescription, 150);
}

void street::StreetView()
{
	printf("\n  Улица: %s\n", streetName);
	printf("  Описание улицы: %s\n", streetDescription);
}
