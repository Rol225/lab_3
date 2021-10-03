#pragma once
class location
{
private:
	int distanceSchool; //Расстояние до школы
	int distanceHospital;//Расстояние до больници
	int  distanceKindergarten;//Расстояние до детского сада
	char houseStreet[30]; //адрес дома
	int numHouse;
public:
	void Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse); //Функция ввода через внешнюю функцию
	void Location_console(); //Функция ввода через встроенную функцию
	void LocationViwe(); //Вывод
};

