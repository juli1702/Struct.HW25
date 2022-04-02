#include <iostream>
#include <string>
using namespace std;

//�������. 
struct movies {
	string title;
	int year;
	string genre;
	int duration;
	int price;
};
void showMovie(movies &m);
movies expensive(movies& m1, movies& m2, movies& m3);
void updateInfo(movies& m);

int main() {
	setlocale(LC_ALL, "Russian");

	//�������
	/*�������� ��������� movies. �������� ��� ������� ���������.*/
	movies m1 = { "������� ������", 2013, "��������", 115, 250 };
	movies m2 = { "1+1 ", 2011, "�����", 112, 265 };
	movies m3 = { "�� � �������", 2013, "�������", 110, 189 };

	//������ 1.
	/*�������� ������� showMovie(), ������� ��������� ������ ��������� � ������� ��� ���������� � �� (�. �.
	��������� ���������� ���������� �������).*/
	cout << "������1\n";
	showMovie(m1);
	cout << endl;
	showMovie(m2);
	cout << endl;
	showMovie(m3);
	cout << endl;
	//������ 2.
	/*�������� ������� expensive(), ������� ��������� ��� ������� ��������� � ���������� ������, � �����
	������� ����� �� ����.*/
	cout << "������ 2.\n�����, � �������� ����� ������� ��������� �� ����: " << expensive(m1, m2, m3).title << endl;
	//������ 3.
	/*�������� ������� updateInfo(), ������� ��������� ������ ��������� � ��������� �������� �����-����
	���������� �������.*/
	cout << "\n������ 3.\n";
	updateInfo(m2);
	cout << endl;
	showMovie(m2);
	cout << endl;

	return 0;
}
//������ 1. 
void showMovie(movies &m) {
	cout << "�������� ������: " << m.title << "\n��� ������: " << m.year << "\n����: " << m.genre << endl;
	cout << "�����������������: " << m.duration << "\n���� �� ����: " << m.price << endl;
}
//������ 2. 
movies expensive(movies& m1, movies& m2, movies& m3) {
	if (m1.price > m2.price && m1.price > m3.price)
		return m1;
	if (m2.price > m1.price && m2.price > m3.price)
		return m2;
	if (m3.price > m1.price && m3.price > m2.price)
		return m3;
}
//������ 3.
void updateInfo(movies& m) {
	int newP;
	cout << "��������, ����� ���������� ������ ��������?";
	cout << "\n1.��������;\n2.��� ������;\n3.����;\n4.�����������������;\n5.���� �� ����;\n";
	cin >> newP;
	switch (newP) {
	case 1: cout << "������� ����� ��������: ";
		cin >> m.title; break;
	case 2: cout << "������� ����� ��� ������: ";
		cin >> m.year; break;
	case 3: cout << "������� ����� ����: ";
		cin >> m.genre; break;
	case 4: cout << "������� ����� �����������������: ";
		cin >> m.duration; break;
	case 5: cout << "������� ����� ���� �� ����: ";
		cin >> m.price; break;
	default: cout << "������ �����!"; break;
	}
}