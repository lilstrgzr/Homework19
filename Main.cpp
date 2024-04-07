#include<iostream>
#include <cmath>


double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}


int print_arr(int arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return (double)sum / 2;
}


void powers(int num1, int num2) {
	int result = 0;
	do {
		std::cout << pow(num1, result) << ", ";
		result++;
	} while (num2 >= result);
}


void positive_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0)
			arr[i] = -arr[i];
		std::cout << arr[i] << ", ";
	}
}



int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// Задача 1. Среднее арифметическое.
	std::cout << "Задача 1.\nВведите первое число -> ";
	std::cin >> n;
	std::cout << "Введите второе число -> ";
	std::cin >> m;
	std::cout << "Среднее арифметическое чисел " << n << " и " << m << " = " << mean(n, m) << std::endl;
	std::cout << std::endl;


	// Задача 2.Массив
	std::cout << "Задача 2.\nМассив: ";
	const int size = 5;
	int arr[size]{ 15, 4, 27, 10, 42 };
	std::cout << "{ ";
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
	std::cout << "Среднее ариметическое массива = " << print_arr(arr, size) << std::endl;
	std::cout << std::endl;


	//Задача 3;
	int N, M;
	std::cout << "Задача 3.\nВведите число -> ";
	std::cin >> N;
	std::cout << "Введите степень ->";
	std::cin >> M;
	std::cout << "Степени числа " << N << " от 0 до " << M << std::endl;
	powers(N, M);
	std::cout << std::endl;


	//Задача 4.
	const int size2 = 10;
	int arr2[size2]{ 5, -4, -74, 96, 14, -5, 27, -1, -18, 42 };
	std::cout << "Задача 4.\nМассив до изменения ";
	std::cout << "{ ";
	for (int i = 0; i < size2; i++)
		std::cout << arr2[i] << ", ";
	std::cout << "\b\b }\n";
	std::cout << "Массив после изменения -> ";
	positive_arr(arr2, size2);
	std::cout << std::endl;



	return 0;
}