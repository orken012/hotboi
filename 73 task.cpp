#include <iostream>
#include <map>
#include <string>

using namespace std;


class Rectangle {
private:
	int a;
	int b;
	map <string, int> coordinateMap; 

public:
	Rectangle(int aa, int bb, int AX, int AY);
	~Rectangle();
	void OtherConrners();
	void PrintCorners(); 
};

int main()
{
	Rectangle R(3, 5, 1, 2);
	R.OtherConrners(); 
	R.PrintCorners(); 
}

Rectangle::Rectangle(int aa, int bb, int AX, int AY)
{
	a = aa;
	b = bb;
	coordinateMap.insert(pair<string, int>("AX", AX)); 
	coordinateMap.insert(pair<string, int>("AY", AY)); 
	

}

void Rectangle::OtherConrners()
{
	int BX, BY, CX, CY, DX, DY;
	BX = coordinateMap.at("AX");     
	BY = coordinateMap.at("AY") + a; 
	DX = coordinateMap.at("AX") + b;  
	DY = coordinateMap.at("AY");     
	CX = DX;                        
	CY = BY;                         


	coordinateMap.insert(pair<string, int>("BX", BX));
	coordinateMap.insert(pair<string, int>("BY", BY));
	coordinateMap.insert(pair<string, int>("CX", CX));
	coordinateMap.insert(pair<string, int>("CY", CY));
	coordinateMap.insert(pair<string, int>("DX", DX));
	coordinateMap.insert(pair<string, int>("DY", DY));

}

void Rectangle::PrintCorners()
{
	setlocale(LC_ALL, "Rus");

	cout << "Вот так наши координаты хранятся в map:" << endl;

	for (auto it = coordinateMap.begin(); it != coordinateMap.end(); ++it)
	{
		cout << it->first << " = " << coordinateMap.at(it->first) << endl;
	}

	cout << endl;
	cout << "Вот так выведем углы с их координатами для юзера: " << endl;
	for (auto it = coordinateMap.begin(); it != coordinateMap.end(); ++it)
	{
		cout << (it->first).substr(0, 1) << "(" << coordinateMap.at(it->first) << ",";
		++it;
		cout << coordinateMap.at(it->first) << ")" << endl;
	}

	cout << endl;
}


Rectangle::~Rectangle()
{
}
