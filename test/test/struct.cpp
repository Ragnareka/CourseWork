#pragma once



void makeStruct(){

std::ifstream in;
				 in.open(fileName);
				 if ( in.is_open() ){
Base position;//����� ��������� � ��������� ������, ������ ������ ������������

std::string str;// ��������� � ������
getline (in, str);
while (in) {
if ((str.find_first_not_of(" \t\r\n") != std::string::npos)// ��������� �� ����������� �� ��� � �� ����� �� 
&& (str[0] != �#�)) {
std::stringstream s(str);
s >> position.tiker >> position.day >>position.month >> position.year>>position.openPrice>>position.maxPrice>>position.minPrice>>position.closePrice;
}
getline (in, str);// why
} 
 	
vectorBase.push_back(position);// � ������ vectorBase ��������  ��������� ���� ���� � ������ position
						 }
						 
					 };

// ��������� ��� ������� �������� ��������� ���.��������, ���������, � ��