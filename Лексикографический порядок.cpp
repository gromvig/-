
#include <iostream>
#include <string>
using namespace std;

template <typename T>

bool F2(T a, T b) {
	int aq = 1, bq = 1;
	T a1 = a, b1 = b;
	while (a1 / 10 >= 1) {
		a1 = a1 / 10;
		aq++;
	}
	while (b1 / 10 >= 1) {
		b1 = b1 / 10;
		bq++;
	}
	return (a * pow(10,bq) > b * pow(10, aq));
}




template <typename T>

bool F(T a, T b) {
	string a_str = to_string(a);
	string b_str = to_string(b);
	return (a_str > b_str);
}


template <typename T>
void sort(T* a, int N) {
	for (int j = 0; j < N; j++) {
		for (int i = 0; i < N - 1; i++) {
			if (F2(a[i], a[i + 1])) {
				double buf = a[i];
				a[i] = a[i + 1];
				a[i + 1] = buf;
			}
		}
	}
}

int main() {
	setlocale (LC_ALL,"Rus");
	int b;
	cout << "Введите размерность массива\n" ;
	cin >> b; 
	if (b < 1) {
		return(0);
	}
	const int N = b;
	double* a = new double[N];
	cout << "Введите массив\n";
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	sort(a, N);
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
	return (0);
}
