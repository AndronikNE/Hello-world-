#include <iostream>
#include <Windows.h>

using namespace std;

main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Привет, мир"<<std::endl;

	return 0;
}