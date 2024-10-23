#include "Point.h"

// Constructor
Point::Point(int x, int y) : x(x), y(y) {}

// Equality Operators
bool Point::operator==(const Point& other) const {
    return (x == other.x) && (y == other.y);
}
bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

// Comparison Operators
bool Point::operator<(const Point& other) const {
    return (x < other.x) || (x == other.x && y < other.y);
}
bool Point::operator>(const Point& other) const {
    return other < *this;
}
bool Point::operator<=(const Point& other) const {
    return !(other < *this);
}
bool Point::operator>=(const Point& other) const {
    return !(*this < other);
}

// Insertion Operator
std::ostream& operator<<(std::ostream& stream, const Point& point) {
    stream << "(" << point.x << ", " << point.y << ")";
    return stream;
}

// Arithmetic Operator
Point Point::operator+(int value) const {
    return Point(x + value, y + value);
}

// Compound Assignment Operator
Point& Point::operator+=(int value) {
    x += value;
    y += value;
    return *this;
}
