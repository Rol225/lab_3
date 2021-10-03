#pragma once
class street
{
private:
	char streetName[30];
	char streetDescription[150];
public:
	void Street(char streetName[], char streetDescription[]); // Функция ввода через встроенную функцию
	void Street_console(); // Функция ввода через внешнюю функцию
	void StreetView(); // Функция вывода
};

