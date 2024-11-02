#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    friend istream& operator>>(istream& in, Point& p);
    friend ostream& operator<<(ostream& out, const Point& p);
};

istream& operator>>(istream& in, Point& p) {
    cout << "Enter x: ";
    in >> p.x;
    cout << "Enter y: ";
    in >> p.y;
    return in;
}

ostream& operator<<(ostream& out, const Point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

int main() {
    Point p;
    cout << "Enter point:" << endl;
    cin >> p;
    cout << "Entered point: " << p << endl;
    return 0;
}
