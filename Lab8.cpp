// ConsoleApplication2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Class {   // ����� ���������� ������� create
private:
	string classname;    // �������� ������ (A, B, C)
	int value;	     // ��������
public:
	Class() {            // ����������� ������, �������� �������� ������ � ��� ��������
		cin >> classname >> value;
	        };
	void print() {       //����� ������ �������� ������ � ��� ��������
		cout << "class " << classname << ": " << value << endl;
	             }
};

vector <Class> strvec;      // ���������-������ ����������� ���������� ��������
int main()
{
	int ncommand;        // ���������� �������� ������
        cin >> ncommand;
	
        string command;      // ������� - ��� ������
	for (int i = 0; i < ncommand; i++)
	{
		cin >> command;
		if (!command.compare(0, 6, "create")) {  //���� �������=create
			Class Cl;			 //������� ������ ������ � ������� ������������
			strvec.push_back(Cl);		 // ��������� ������ � ���������-������
		}
		if (!command.compare(0, 7, "showall")) {   //���� �������=showall
		    vector <Class>::iterator pos;	   //���������� �������� ������ � �����������	
			for (pos = strvec.begin(); pos != strvec.end(); ++pos)   //���� �� ���� ��������� ����������
			{
				pos->print();   //������ �������� ����������-�������: ����� ������ ������
			}
		}
	} 
	system("pause");
}

