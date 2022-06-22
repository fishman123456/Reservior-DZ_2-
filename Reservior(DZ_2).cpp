﻿// Reservior(DZ_2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Разработать класс водоём . Класс должен обязательно иметь поле "название".
//Класс должен содержать:
//1 конструктор по умолчанию
//2 конструктор с параметрами
//3 при необходимости реализовать деструктор и конструктор копирования
//-------------------------------------
// 1 Определения приблизительного обьема (ширина, длина, максимальная глубина)
// 2 Определение площади водной поверхности
// 3 Метод ля проверки относятся ли водоемы к одному типу (море-море, бассейн-пруд)
// 4 Для сравнения площади водной поверхности водоемов одного типа
// 5 Для копирования обьектов
// 6 Остальные методы на рассмотрение разработчика (методы set и get)
// 7 Не напишу интерфейс
// 8 Реализовать динамический массив обьектов класса с возможностью добавления,
// удаления обьектов из массива

#include <iostream>
using namespace std;
class Reservior {
private:
	string name;
	double length;
	double width;
	double height;

public:
	Reservior(double Plength, double Pwidth, double Pheight, string Pname)
		:length{ Plength }, width{ Pwidth }, height{ Pheight }, name{ Pname }
	{
		cout << "\nработает конструктор с параметрами\n";
	}
	Reservior() {}
	~Reservior(){}

};

int main()
{
	system("chcp 1251");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
