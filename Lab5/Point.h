#pragma once
#include <iostream>

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


	//Arithmetic Operators


	//Compound Assignment Operator

};

