// structuresbase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Base // ��������� ������ 

{
    char tiker[35];
	int day;
	int month;
	int year;
	float openPrice;
	float maxPrice;
	float minPrice;
	float closePrice;
    // ��������� �������� ���������  
	
};



int main()
{  vector <Base> VecBase; //������ vecBase �������� ��������� ���� Base
ifstream in ("BaseData.txt");

Base data; //����� ��������� � ��������� ������, ������ ������ ������������
int n=0;
while (in.peek()!=EOF)//���� �� ������ ������ ����� �����
{  VecBase.push_back(data); 
	in>>VecBase.at(n).tiker;
	in>>VecBase.at(n).day;
	in>>VecBase.at(n).month;
	in>>VecBase.at(n).year;
	in>>VecBase.at(n).openPrice;
	in>>VecBase.at(n).maxPrice;
	in>>VecBase.at(n).minPrice;
	in>>VecBase.at(n).closePrice;
// others
n++;
};
in.close();

	return 0;
}

