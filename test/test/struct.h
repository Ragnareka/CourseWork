#pragma once
#include "StdAfx.h"
#include <vector>
#include <iostream>
#include <windows.h>
#include"struct.cpp"

struct Base
{
    char tiker;
	int day;
	int month;
	int year;
	float openPrice;
	float maxPrice;
	float minPrice;
	float closePrice;

    // остальные элементы структуры   
} 
vector <Base> vectorBase;//Вектор vectorBase содержит структуры типа Base
// 
