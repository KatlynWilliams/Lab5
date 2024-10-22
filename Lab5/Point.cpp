#include "Point.h"


//Constructor
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

//Equality Operators
bool Point::operator==(const Point& other) const {
	return (x == other.x) && (y == other.y);
}
bool Point::operator!=(const Point& other) const {
	return !(x == other.x) && (y == other.y);
}

//Comparison Operators
bool Point::operator<(const Point& other) const {
	return (x < other.x) && (y < other.y);
}
bool Point::operator>(const Point& other) const {
	return (x > other.x) && (y > other.y);
}
bool Point::operator<=(const Point& other) const {
	return !(x > other.x) && (y > other.y);
}
bool Point::operator>=(const Point& other) const {
	return !(x < other.x) && (y < other.y);
}
//Insertion Operator
std::ostream& operator<<(std::ostream& stream, const Point& point) {
	stream << point.x;
	stream << point.y;
	return stream;
}

//Arithmetic Operator
Point Point::operator+(int value) {
	Point total{ x, y };
	total.x = total.x + value;
	total.y = total.y + value;
	return (total);
}


//Compound Assignment Operator
void Point::operator+=(int value) {
	x = x + value;
	y = y + value;
}
