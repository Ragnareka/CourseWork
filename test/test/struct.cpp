#pragma once



void makeStruct(){

std::ifstream in;
				 in.open(fileName);
				 if ( in.is_open() ){
Base position;//„тобы поместить в структуру объект, объект должен существовать

std::string str;// считываем в строку
getline (in, str);
while (in) {
if ((str.find_first_not_of(" \t\r\n") != std::string::npos)// провер€ем не комментарий ли это и не конец ли 
&& (str[0] != Т#Т)) {
std::stringstream s(str);
s >> position.tiker >> position.day >>position.month >> position.year>>position.openPrice>>position.maxPrice>>position.minPrice>>position.closePrice;
}
getline (in, str);// why
} 
 	
vectorBase.push_back(position);// в вектор vectorBase помещаем  структуру типа Ѕаза с именем position
						 }
						 
					 };

// вычислить дл€ каждого элемента структуры мат.ожидание, дисперсию, и тд