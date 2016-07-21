#include "Tasks.h"
#include <iostream>

// Первая задача
void one_tasks()
{
	double a(0), b(0);

	// Получение исходных данных
	std::cout << std::endl << "Введите пожалуйста число A: ";
	std::cin >> a;

	std::cout << std::endl << "Введите пожалуйста число B: ";
	std::cin >> b;

	/*
		Ответ
	*/
	// Сумма
	std::cout << a << " + " << b << " = " << (a + b) << std::endl;
	
	// Разность
	std::cout << a << " - " << b << " = " << (a - b) << std::endl;

	// Произведение
	std::cout << a << " * " << b << " = " << (a * b) << std::endl;
}

// Вторая задача
void two_tasks()
{
	double x(0), y(0);

	// Получение исходных данных
	std::cout << std::endl << "Введите пожалуйста число X: ";
	std::cin >> x;

	std::cout << std::endl << "Введите пожалуйста число Y: ";
	std::cin >> y;

	/*
		Ответ
	*/
	double result(0);

	result = (std::abs(x) - std::abs(y))/ (1 + std::abs(x * y));

	// Вывод результата
	std::cout << "Результат: " << result << std::endl;
}