// ConsoleApplication2.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Class {   //  ласс параметров команды create
private:
	string classname;    // Ќазвание класса (A, B, C)
	int value;	     // значение
public:
	Class() {            // конструктор класса, ввод€щий название класса и его значение
		cin >> classname >> value;
	        };
	void print() {       //метод печати названи€ класса и его значени€
		cout << "class " << classname << ": " << value << endl;
	             }
};

vector <Class> strvec;      // контейнер-массив стандартной библиотеки шаблонов
int main()
{
	int ncommand;        // количество вводимых команд
        cin >> ncommand;
	
        string command;      // команда - тип строка
	for (int i = 0; i < ncommand; i++)
	{
		cin >> command;
		if (!command.compare(0, 6, "create")) {  //если команда=create
			Class Cl;			 //—оздаем объект класса с вызовом конструктора
			strvec.push_back(Cl);		 // ƒобавл€ем объект в контейнер-массив
		}
		if (!command.compare(0, 7, "showall")) {   //если команда=showall
		    vector <Class>::iterator pos;	   //определ€ем итератор работы с контейнером	
			for (pos = strvec.begin(); pos != strvec.end(); ++pos)   //цикл по всем значени€м контейнера
			{
				pos->print();   //печать элемента контейнера-массива: вызов метода печати
			}
		}
	} 
	system("pause");
}

