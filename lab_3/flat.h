#pragma once

class flat
{
private:
	int coin; //����
	int countRoom; //���-�� ������
	int numFlat; //����� ��������
public:
	void Flat�ompletion(int coin_2, int countRoom_2, int numFlat_2); // ������� ����� ����� ������� �������
	void Flat�ompletion_console();  // ������� ����� ����� ���������� �������
	void FlatViwe(); // ������� ������
	/// ������� ������ ������ ��������� ����������
	int Out_coin();
	int Out_countRoom();
	int Out_numFlat();
};

