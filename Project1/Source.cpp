#include <iostream>
#include <string>

int main()
{
	std::cout << "Do you wanna know our age difference?" << std::endl;
	std::string choice;
	std::cin >> choice;
	int busyaAge;
	int danyaAge;
	if (choice == "yes")
	{
		std::cout << "How old are you?" << std::endl;
		std::cin >> busyaAge;
		std::cout << "How old am I?" << std::endl;
		std::cin >> danyaAge;
		std::cout << "Our difference in age is " << danyaAge - busyaAge;
	}
	else
	{
		std::cout << "okay ....................";
	};
	system("pause>0");
}
