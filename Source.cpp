//Рекурсия
#include <iostream>
using namespace std;
//Факториал с помощью рекурсии
long long factorial(int num) {
	if (num <= 1)
		return 1;
	return factorial(num-1) * num;
}

//Число Фибоначчи с помощью рекурсии
int fibonacci(int num) {
	if (num == 0 || num == 1)
		return num;
	return fibonacci(num - 2) + fibonacci(num - 1);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Факториал
	/*cout << "Введите число: ";
	cin >> n;
	cout << n << "!" << " = " << factorial(n) << "\n\n";*/

	//Задача 1. Число Фибоначчи
	cout << "Задача №1.\nВведите номер числа Фибоначчи: ";
	cin >> n;
	cout << n << ") " << fibonacci(n) << "\n";
	cout << "Первые 13 чисел Фибоначчи: \n";
	for (int i = 0; i < 13; i++)
		cout << fibonacci(i) << ", ";
	cout << "\b\b.\n\n";

	return 0;
}