#pragma once
#include <iostream>
#include <ostream>

class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y);

	//Equality Operators
	bool operator==(const Point& other) const;
	bool operator!=(const Point& other) const;

	//Comparison Operators
	bool operator<(const Point& other) const;
	bool operator>(const Point& other) const;
	bool operator<=(const Point& other) const;
	bool operator>=(const Point& other) const;

	//Insertion Operator
	friend std::ostream& operator<<(std::ostream& stream, const Point& point);

	//Arithmetic Operator
	void operator+(int value);

	//Compound Assignment Operator
	Point operator=+(int value);
};

