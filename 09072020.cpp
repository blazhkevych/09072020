//співвідношення між класами/ успадкування
#include <iostream>
using namespace std;

class Point {
protected:
	int x;
	int y;
public:
	Point() : x(0), y(0) {}
	Point(int X, int Y) : x(X), y(Y) {
		cout << "Ya tyt byv (Point)\n";
	}
	void Print() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	~Point() { cout << "Destruct Point\n"; }
};

class Circle : public Point {
protected:
	int R;
public:
	Circle() : Point(), R(0) {}
	Circle(int x1, int y1, int R1) : Point(x1, y1), R(R1) {
		cout << "Ya tyt byv (Circle)\n";
	}
	void Print() {
		Point::Print();
		cout << "R = " << R << endl;
	}
	double Square() {
		return 4 * atan(1) * R * R;
	}
	double Length() {
		return 8 * atan(1) * R;
	}
	~Circle() { cout << "Destruct Circle\n"; }
};

class Cilindr : public Circle {
protected:
	int h;
public:
	Cilindr() : Circle(0, 0, 0), h(0) {}
	Cilindr(int l1, int x1, int y1, int R1) :Circle(x1, y1, R1), h(l1) {
		cout << "Ya tyt byv (Cilindr)\n";
	}
	double Pov() {
		return 8 * atan(1) * R * (R + h);
	}
	~Cilindr() { cout << "Destruct Cilindr\n"; }
};

class Base {
private:
	int x;
protected:
	int y;
public:
	int z;
};
class Derived : private Base {
public:
	void Show() {
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
	}
};
int main() {
	/*Point A(10, 20);
	A.Print();
	Circle B(1, 1, 1);
	B.Print();
	cout << "Square = " << B.Square() << endl;
	cout << "Length = " << B.Length() << endl;
	Cilindr C(10, 1, 1, 5);
	cout << "Poverhnost = " << C.Pov() << endl;*/
	Derived D;
	D.Show();

}










//#include <iostream>
//using namespace std;
//
//class Point
//{
//protected:
//	int x;
//	int y;
//public:
//	Point() : x(0), y(0) {}
//	Point(int x, int y);
//	void Print();
//};
//Point::Point(int a, int b)
//{
//	x = a;
//	y = b;
//}
//void Point::Print()
//{
//	cout << "X = " << x << '\n';
//	cout << "Y = " << y << '\n';
//}
//
//class Circle : public Point
//{
//protected:
//	int R;
//public:
//	Circle() : Circle(0, 0, 0) {}
//	Circle(int x1, int y1, int R1) :Point(x1, y1)
//	{
//		R = R1;
//	}
//	void Print();
//	double Square();
//	double Lenght();
//
//};
//void Circle::Print()
//{
//	Point::Print();
//	cout << "R = " << R << '\n';
//}
//double Circle::Square()
//{
//	return 4 * atan(1) * R * R;
//}
//double Circle::Lenght()
//{
//	return 2 * 4 * atan(1) * R;
//}
//
//class Cilinder : public Circle
//{
//protected:
//	int H;
//public:
//	Cilinder() : Cilinder(0, 0, 0, 0) {}
//	Cilinder(int x1, int y1, int R1, int h1) :Circle(x1, y1, R1)
//	{
//		R = R1;
//	}
//	void Print();
//	double Square_Full();
//
//};
//void Cilinder::Print()
//{
//	Circle::Print();
//	cout << "H = " << H << '\n';
//}
//double Cilinder::Square_Full()
//{
//	return 2 * Square() + H * Lenght();
//}
//
//int main()
//{
//	Point A(2, 3);
//	A.Print();
//	// прінт з класу Circle
//	cout << "**************************" << endl;
//	Circle C(1, 2, 3);
//	C.Print();
//	cout << "**************************" << endl;
//	cout << "Lenght = " << C.Lenght() << endl;
//	cout << "Square = " << C.Square() << endl;
//	cout << "**************************" << endl;
//	Cilinder B(1, 2, 3, 4);
//	B.Print();
//	cout << "Square_Full = " << B.Square_Full() << endl;
//}
