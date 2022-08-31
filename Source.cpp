//��������
#include <iostream>
using namespace std;
//��������� � ������� ��������
long long factorial(int num) {
	if (num <= 1)
		return 1;
	return factorial(num-1) * num;
}

//����� ��������� � ������� ��������
int fibonacci(int num) {
	if (num == 0 || num == 1)
		return num;
	return fibonacci(num - 2) + fibonacci(num - 1);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//���������
	/*cout << "������� �����: ";
	cin >> n;
	cout << n << "!" << " = " << factorial(n) << "\n\n";*/

	//������ 1. ����� ���������
	cout << "������ �1.\n������� ����� ����� ���������: ";
	cin >> n;
	cout << n << ") " << fibonacci(n) << "\n";
	cout << "������ 13 ����� ���������: \n";
	for (int i = 0; i < 13; i++)
		cout << fibonacci(i) << ", ";
	cout << "\b\b.\n\n";

	return 0;
}