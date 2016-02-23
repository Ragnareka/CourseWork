// structuresbase.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
//#include <algorithm>


using namespace std;

struct Base // структура данных 

{
    char tiker[35];
	  char per[10];
	int dateymd;
	float openPrice;
	float maxPrice;
	float minPrice;
	float closePrice;
	float volume;
    // остальные элементы структуры  
	
};



int main()
{  vector <Base> VecBase; //Вектор vecBase содержит структуры типа Base для работы с данными на данный момент
ifstream in ("BaseData.txt");


Base data; //Чтобы поместить в структуру объект, объект должен существовать
int n=0;
while (in.peek()!=EOF)//пока не считан маркер конца файла
{  VecBase.push_back(data); 
	in>>VecBase.at(n).tiker;
	in>>VecBase.at(n).per;
	in>>VecBase.at(n).dateymd;
	in>>VecBase.at(n).openPrice;
	in>>VecBase.at(n).maxPrice;
	in>>VecBase.at(n).minPrice;
	in>>VecBase.at(n).closePrice;
	in>>VecBase.at(n).volume;
// others
n++;
};
in.close();

 std:: sort(VecBase.begin(), VecBase.end());
	return 0;
}

