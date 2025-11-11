#include <iostream>
#include<Windows.h>

using namespace std;

struct money
{
	double first;
	double second;
};

int main()
{
	setlocale(LC_ALL,"ukr");
	money call;
	cout << "Введiть довжину телефоної розмови(хв) ";
	cin >> call.first;
	cout << "Введiть цiну за хвиилну ";
	cin >> call.second;
	cout << "Цiна - " << call.first*call.second;
	return 0;

}