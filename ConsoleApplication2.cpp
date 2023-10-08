#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	/*1.Дано: Два целых числа.Являются ровно одно из чисел нечетное?*/
	int a, b, c, d, e;
	cout << "Введите первое двузначное число: ";
	cin >> a;
	c = 2;
	b = a % c;
	if (b > 0)
	{
		cout << "Число нечётное" << endl;
	}
	else
	{
		(b = 0);
		cout << "Число чётное" << endl;
	}
	cout << "Введите второе двузначное число: ";
	cin >> d;
	e = d % c;
	if (e > 0)
	{
		cout << "Число нечётное" << endl;
	}
	else
	{
		(e = 0);
		cout << "Число чётное" << endl;
	}
	if (b > 0 && e > 0)
		cout << "Оба числа нечётные" << endl;
	if (b == 0 && e == 0)
		cout << "Оба числа чётные" << endl;
	if (b > 0 && e == 0)
		cout << "Первое число нечётное, второе чётное" << endl;
	if (b == 0 && e > 0)
		cout << "Первое число чётное,второе нечётное" << endl;
	return 0;
}
