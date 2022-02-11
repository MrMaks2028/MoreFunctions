// Персональный шаблон проекта c++
#include <iostream>
using namespace std;

template <typename T> T func(T num) {
	return num * num * num * num;
}


int func(int num) {
	cout << "Число целое\n";
	return num * num * num;
}
float func(float num) {
	cout << "Число вещественное\n";
	return num * num * num;
}
double func(double num1, double num2) {
	cout << "Вы передали пару чисел\n";
	double res = num1 * num2;
	return res;
}

template <typename T_1, typename T_2> T_1 func(T_1 num, T_2 num2) {
	return num * num * num * num2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	int n;
	/*float m;
	cin >> n;
	cout << func(n) << endl;
	cin >> m;
	cout << func(m) << endl;
	double p;
	cin >> p;
	cout << func(p, n) << endl;
	cout << func(n, n) << endl;*/

	cin >> n;
	cout << func(n) << endl;
	cout << func(2.5) << endl;
	cout << func(true, false);
	

	return 0;
}