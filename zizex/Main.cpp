#include <iostream>



int main()
{	
	setlocale(LC_ALL, "ru");
	/*
	std::cout << "калькулятор\n";
	int a = -5;

	if (a < 0)
	{
		std::cout << "Hellow";
	}
	else if (a < 100)
	{
		std::cout << "Helo";
	}
	else
	{
		std::cout << "error";
	}

	double one = 0;
	double two = 0;





	
	
	
	std::cin >> one;
	std::cin >> two;
	std::cout << "плюс: " << one + two << "\n";
	std::cout << "минус: " << one - two << "\n";
	std::cout << "Деление: " << one / two << "\n";
	std::cout << "умножение: " << one * two << "\n";


	
	

	*/
	int rub = 0;
	int dol = 0;
	int eur = 0;
	int uan = 0;
	int far = 0;
	int ien = 0.5;
	int one;
	double ddd;
	char zxc = 'y';
	std::cout << "скики рублев у вас? - ";
	std::cin >> rub;

	ddd = rub * 0.05;
	while (zxc == 'y')
	{
		std::cout << "какую валюту выбирите? - 1.Доллар 2.евро 3.юань 4.фарит 5.йен";
		std::cin >> one;
		if (one == 1)
		{
			double dol = (rub - ddd) / 84;
			std::cout << "Вот стоко вы палучите долларов " << dol << "\n";

		}
		else if (one == 2)
		{
			double eur = (rub - ddd) / 94;
			std::cout << "Вот стоко вы палучите евро " << eur << "\n";

		}
		else if (one == 3)
		{
			double uan = (rub - ddd) / 11;
			std::cout << "Вот стоко вы палучите юань " << uan << "\n";
		}
		else if (one == 4)
		{
			double far = (rub - ddd) / 37;
			std::cout << "Вот стоко вы палучите фарит " << far << "\n";
		}
		else if (one == 5)
		{
			double ien = (rub - ddd) / 0.5;
			std::cout << "Вот стоко вы палучите йен " << ien << "\n";
		}
	}



	


















	
}
















































