#pragma once
class location
{
private:
	int distanceSchool; //���������� �� �����
	int distanceHospital;//���������� �� ��������
	int  distanceKindergarten;//���������� �� �������� ����
	char houseStreet[30]; //����� ����
	int numHouse;
public:
	void Location(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse); //������� ����� ����� ������� �������
	void Location_console(); //������� ����� ����� ���������� �������
	void LocationViwe(); //�����
};

