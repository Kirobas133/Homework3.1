#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	setlocale(LC_ALL, "Russian");

	std::vector<int> vec = {4, 7, 9, 14, 12};

	std::cout << "Входные данные: ";
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;

	auto func = [&vec]() {
		std::for_each(vec.begin(), vec.end(), [](int& j) {j *= 3;});
	};
	func();

	std::cout << "Выходные данные: ";
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
}