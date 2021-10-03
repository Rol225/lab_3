#pragma once

class flat
{
private:
	int coin; //цена
	int countRoom; //кол-во комнат
	int numFlat; //Номер квартиры
public:
	void FlatСompletion(int coin_2, int countRoom_2, int numFlat_2); // Функция ввода через внешнюю функцию
	void FlatСompletion_console();  // Функция ввода через встроенную функцию
	void FlatViwe(); // Функция вывода
	/// Функции вывода каждой отдельной переменной
	int Out_coin();
	int Out_countRoom();
	int Out_numFlat();
};

