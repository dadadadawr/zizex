#include <iostream>



int main()
{	
	setlocale(LC_ALL, "ru");
	/*
	std::cout << "�����������\n";
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
	std::cout << "����: " << one + two << "\n";
	std::cout << "�����: " << one - two << "\n";
	std::cout << "�������: " << one / two << "\n";
	std::cout << "���������: " << one * two << "\n";


	
	

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
	std::cout << "����� ������ � ���? - ";
	std::cin >> rub;

	ddd = rub * 0.05;
	while (zxc == 'y')
	{
		std::cout << "����� ������ ��������? - 1.������ 2.���� 3.���� 4.����� 5.���";
		std::cin >> one;
		if (one == 1)
		{
			double dol = (rub - ddd) / 84;
			std::cout << "��� ����� �� �������� �������� " << dol << "\n";

		}
		else if (one == 2)
		{
			double eur = (rub - ddd) / 94;
			std::cout << "��� ����� �� �������� ���� " << eur << "\n";

		}
		else if (one == 3)
		{
			double uan = (rub - ddd) / 11;
			std::cout << "��� ����� �� �������� ���� " << uan << "\n";
		}
		else if (one == 4)
		{
			double far = (rub - ddd) / 37;
			std::cout << "��� ����� �� �������� ����� " << far << "\n";
		}
		else if (one == 5)
		{
			double ien = (rub - ddd) / 0.5;
			std::cout << "��� ����� �� �������� ��� " << ien << "\n";
		}
	}



	


















	
}
















































