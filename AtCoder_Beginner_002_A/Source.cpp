#include<iostream>

int main() {
	int x, y;
	std::cin >> x;
	std::cin >> y;
	x > y ? std::cout << x << std::endl : std::cout << y << std::endl;
	return 0;
}