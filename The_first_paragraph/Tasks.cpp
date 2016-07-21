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