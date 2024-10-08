#include "Point.cpp"

int main() {
// test case 1
	Point first{ 10, 20 };
	Point second{ 12, 21 };
	if (first == second) {
		std::cout << "equal";
	}
	else {
		std::cout << "not equal";
	}
// output:


// test case 2:
	Point first{ 10, 20 };
	Point second{ 12, 21 };
	if (first < second)
		std::cout << "first is less than second";
// output:


// test case 3:
	Point first{ 10, 20 };
	Point second{ 12, 21 };
	std::cout << "first: " << first << "," << "second: " << second;
// output:

// test case 4
	Point first{ 10, 20 };
	Point second{ 12, 21 };
	std::cout << first + 50;
	second += 100;
	std::cout << second;
// output:


	return 0;
}