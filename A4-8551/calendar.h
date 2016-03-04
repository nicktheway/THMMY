/**
* calendar.h
* ����������������� ��������, 4� �������
* ������������� �����������
* �������� ���������, 8551
* 03/11/2015
*/

#ifndef CALENDAR_H
#define CALENDAR_H

class calendar{
public:
	calendar(); //����� �������� ����� ��� �� ���� ���������
	calendar(int d, int m, int y); //�������� ����� ��� ����������� �� ���� ���������
	calendar(const calendar& c);
	calendar operator+(const calendar& c); //����������� ��� ������� + ��� ����������� �� �� ����������� ��� ������
	calendar operator-(const calendar& c); //����������� ��� ������� - ��� ����������� �� �� ����������� ��� ������
	calendar operator=(const calendar& c); //����������� ��� ������� - ��� ����������� �� �� ����������� ��� ������
	void getDate(); //��������� ��� ����������
	~calendar();
private: 
	int* day, *month, *year;
	static const int days[]; //������� ��� �������� ��� ������� ��� ������ ���� ����.
	void checkDate(const calendar& c); //������� ��� �������� ��� ����������� (��� ������ ��� ������� ���)
};

#endif