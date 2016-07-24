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

// Третья задача
void three_tasks()
{
	// Длина ребра куба
	double edge(0);

	// Получение исходных данных
	std::cout << std::endl << "Введите пожалуйста размер ребра куба: ";
	std::cin >> edge;

	/*
		Ответ
	*/
	// Вычисление объёма куба
	double volumeCub = std::pow(edge, 3);

	// Вычисление площади боковой поверхности
	double areaSideSurface = std::pow(edge, 2) * 4;

	// Вывод результата
	std::cout << std::endl << "Объём куба: " << volumeCub
		<< std::endl << "Площадь боковой поверхности: "
		<< areaSideSurface << std::endl << std::endl;
}

// Четвёртая задача
void four_tasks()
{
	// Два действительных положительных числа
	double one_number(1), two_number(1);

	// Получение данных
	std::cout << std::endl << "Введите пожалуйста первое положительное число: ";
	std::cin >> one_number;

	std::cout << std::endl << "Введите пожалуйста второе положительное число: ";
	std::cin >> two_number;

	one_number = std::abs(one_number);
	two_number = std::abs(two_number);

	/*
		Ответ
	*/

	// Вычисление среднего арифметического
	double average = (one_number + two_number) / 2;

	// Вычисление среднего геометрического
	double geometricMean = std::sqrt(one_number * two_number);
	
	// Вывод результата
	std::cout << std::endl << "Среднее арифметическое: "
		<< average << std::endl << "Среднее геометрическое: "
		<< geometricMean << std::endl << std::endl;
}

// Пятая задача
void five_tasks()
{
	// Два действительных числа
	double one_number(0), two_number(0);

	// Получение данных
	std::cout << std::endl << "Введите первое число: ";
	std::cin >> one_number;

	std::cout << std::endl << "Введите второе число: ";
	std::cin >> two_number;

	/*
		Ответ
	*/
	// Вычисление среднего арифметического
	double average = (one_number + two_number) / 2.0;

	// Вычисление среднего геометрического модулей
	double geometricMean = std::sqrt(std::abs(one_number) 
									 * std::abs(two_number));

	// Вывод результата
	std::cout << std::endl << "Среднее арифметическое: "
		<< average << std::endl
		<< "Среднее геометрическое: " 
		<< geometricMean << std::endl;
}

// Шестая задача
void six_tasks()
{
	// Катеты прямоугольного треугольника
	double oneCathetus(1), twoCathetus(1);

	// Получение данных
	std::cout << std::endl
		<< "Введите первый катет прямоугольного треугольника: ";
	std::cin >> oneCathetus;

	std::cout << std::endl
		<< "Введите второй катет прямоугольного треугольника: ";
	std::cin >> twoCathetus;

	oneCathetus = std::abs(oneCathetus);
	twoCathetus = std::abs(twoCathetus);

	/*
		Ответ
	*/
	// Вычисление гипотенузы прямоугольного треугольника
	double hypotenuse = std::sqrt(std::pow(oneCathetus, 2) 
								  + std::pow(twoCathetus, 2));

	// Вычисление площади прямоугольного треугольника
	double area = oneCathetus * twoCathetus / 2.0;

	// Вывод результата
	std::cout << std::endl
		<< "Гипотенуза прямоугольного треугольника: "
		<< hypotenuse << std::endl
		<< "Площадь прямоугольного треугольника: "
		<< area << std::endl;
}

// Седьмая задача
void seven_tasks()
{
	// Количество литров воды
	double oneManyLiters(0), twoManyLiters(0);

	// Температура каждого кувшина
	double oneTemperaturePitcher(0), twoTemperaturePitcher(0);

	// Получение данных
	std::cout << std::endl
		<< "Введите первый объём кувшина: ";
	std::cin >> oneManyLiters;

	std::cout << std::endl
		<< "Введите второй объём кувшина: ";
	std::cin >> twoManyLiters;

	std::cout << std::endl
		<< "Введите температуру первого кувшина: ";
	std::cin >> oneTemperaturePitcher;

	std::cout << std::endl
		<< "Введите температуру второго кувшина: ";
	std::cin >> twoTemperaturePitcher;

	/*
		Ответ
	*/
	// Вычисление объёма образовавшейся смеси
	double volumeMixture = oneManyLiters + twoManyLiters;

	// Вычисление температуры смеси
	double temperatureMixture = 
		(oneManyLiters * oneTemperaturePitcher + 
		 twoManyLiters * twoTemperaturePitcher) 
		/ volumeMixture;

	// Вывод результата
	std::cout << std::endl
		<< "Объём смеси: " << volumeMixture << std::endl
		<< "Температура смеси: " << temperatureMixture
		<< std::endl;
}

// Восьмая задача
void eight_tasks()
{
	// Количество углов n-угольника
	int numberAngle(1);

	// Радиус окружности вокруг которой описан n-угольник
	double radius(1);

	// Получение данных
	std::cout << std::endl
		<< "Введите количество углов n-угольника: ";
	std::cin >> numberAngle;

	std::cout << std::endl
		<< "Введите радиус вокруг которой описан n-угольник: ";
	std::cin >> radius;

	// Вычисление периметра n-угольника
	double perimeter =
		2 * radius * numberAngle * std::sin(3.14 / numberAngle)
		* std::cos(3.14 / numberAngle);

	// Вывод результата
	std::cout << std::endl
		<< "Периметр n-угольника: " << perimeter << std::endl;
}

// Девятая задача
void nine_tasks()
{
	// Сопротивление трёх резисторов
	double oneResistance(1), twoResistance(1), 
		threeResistance(1);

	// Получение данных

	do
	{
		std::cout << std::endl
			<< "Введите сопротивление первого резистора: ";
		std::cin >> oneResistance;
	} while (oneResistance <= 0);

	do
	{
		std::cout << std::endl
			<< "Введите сопротивление второго резистора: ";
		std::cin >> twoResistance;
	} while (twoResistance <= 0);

	do
	{
		std::cout << std::endl
			<< "Введите сопротивление третьего резистора: ";
		std::cin >> threeResistance;
	} while (threeResistance <= 0);

	/*
		Ответ
	*/
	// Вычисление сопротивления цепи соединённых параллельно
	double resultResistance = 1 /
		(1 / oneResistance + 1 / twoResistance
		 + 1 / threeResistance);

	// Вывод результата
	std::cout << std::endl
		<< "Общее сопротивление цепи соединённых параллельно: "
		<< resultResistance << std::endl;
}