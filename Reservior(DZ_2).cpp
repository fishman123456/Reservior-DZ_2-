// Reservior(DZ_2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
	
	double length;
	double width;
	double height;
	string name;
	double squ;
public:
	Reservior(double Plength, double Pwidth, double Pheight, string Pname)
		:length{ Plength }, width{ Pwidth }, height{ Pheight }, name{ Pname }
	{
		cout << "\nработает конструктор с параметрами\n";
	}
	Reservior(): Reservior(0,0,0,"0") {}
	~Reservior() {
		cout << "\n Работает деструктор\n";
	}
	// volume
	//  1 Определения приблизительного обьема (ширина, длина, максимальная глубина)
	double volume(double Plength, double Pwidth, double Pheight, string Pname) 
	{ 
		double vol =
			(Plength * Pwidth * Pheight);
		cout << endl << "Обьем водоема = " << vol << " m3" << endl;
		return vol;

	}
	// 2 Определение площади водной поверхности
	double square (double Plength, double Pwidth,  string Pname)
	{

		double squ =
			(Plength * Pwidth);
		cout << endl << "Площадь водоема = " << squ << " m3" << endl;
		return squ;

	}
	void print()
	{
		
	}
};

int main()
{
	system("chcp 1251");
	Reservior one;
	one.volume(3.2, 6.4, 5.2, "ванная");
	one.square(2, 2, "бассейн");
	Reservior two;
	
}

