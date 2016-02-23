// structuresbase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Base // структура данных 

{
    char tiker[35];
	int day;
	int month;
	int year;
	float openPrice;
	float maxPrice;
	float minPrice;
	float closePrice;
    // остальные элементы структуры  
	
};



int main()
{  vector <Base> VecBase; //Вектор vecBase содержит структуры типа Base
ifstream in ("BaseData.txt");

Base data; //Чтобы поместить в структуру объект, объект должен существовать
int n=0;
while (in.peek()!=EOF)//пока не считан маркер конца файла
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

