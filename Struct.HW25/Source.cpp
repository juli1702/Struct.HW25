#include <iostream>
#include <string>
using namespace std;

//Задание. 
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

	//Задание
	/*Создайте структуру movies. Создайте три объекта структуры.*/
	movies m1 = { "Иллюзия обмана", 2013, "детектив", 115, 250 };
	movies m2 = { "1+1 ", 2011, "драма", 112, 265 };
	movies m3 = { "Мы — Миллеры", 2013, "комедия", 110, 189 };

	//Задача 1.
	/*Создайте функцию showMovie(), которая принимает объект структуры и выводит всю информацию о нём (т. е.
	выводится содержание переменных объекта).*/
	cout << "Задача1\n";
	showMovie(m1);
	cout << endl;
	showMovie(m2);
	cout << endl;
	showMovie(m3);
	cout << endl;
	//Задача 2.
	/*Создайте функцию expensive(), которая принимает три объекта структуры и возвращает объект, с самой
	высокой ценой за диск.*/
	cout << "Задача 2.\nФильм, у которого самая высокая стоимость за диск: " << expensive(m1, m2, m3).title << endl;
	//Задача 3.
	/*Создайте функцию updateInfo(), которая принимает объект структуры и позволяет поменять какую-либо
	переменную объекта.*/
	cout << "\nЗадача 3.\n";
	updateInfo(m2);
	cout << endl;
	showMovie(m2);
	cout << endl;

	return 0;
}
//Задача 1. 
void showMovie(movies &m) {
	cout << "Название фильма: " << m.title << "\nГод выхода: " << m.year << "\nЖанр: " << m.genre << endl;
	cout << "Продолжительность: " << m.duration << "\nЦена за диск: " << m.price << endl;
}
//Задача 2. 
movies expensive(movies& m1, movies& m2, movies& m3) {
	if (m1.price > m2.price && m1.price > m3.price)
		return m1;
	if (m2.price > m1.price && m2.price > m3.price)
		return m2;
	if (m3.price > m1.price && m3.price > m2.price)
		return m3;
}
//Задача 3.
void updateInfo(movies& m) {
	int newP;
	cout << "Выберите, какую переменную хотите поменять?";
	cout << "\n1.Название;\n2.Год выхода;\n3.Жанр;\n4.Продолжительность;\n5.Цена за диск;\n";
	cin >> newP;
	switch (newP) {
	case 1: cout << "Введите новое название: ";
		cin >> m.title; break;
	case 2: cout << "Введите новый год выхода: ";
		cin >> m.year; break;
	case 3: cout << "Введите новый жанр: ";
		cin >> m.genre; break;
	case 4: cout << "Введите новую продолжительность: ";
		cin >> m.duration; break;
	case 5: cout << "Введите новую цену за диск: ";
		cin >> m.price; break;
	default: cout << "Ошибка ввода!"; break;
	}
}