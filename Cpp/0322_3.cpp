//#include<iostream>
//
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle() { radius = 1; };
//	Circle(int r) {
//		radius = r;
//	}
//	void setRadius(int r) { radius = r; }
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//
//int main() {
//
//	Circle circleArray[3];
//
//	circleArray[0].setRadius(10);
//	circleArray[1].setRadius(20);
//	circleArray[2].setRadius(30);
//
//	Circle *p;
//	p = circleArray;
//	cout << p;
//	for (int i = 0; i < 3; i++) {
//		cout << i << "�� ������" << p->getArea() << endl;
//		p++;
//	}
//
//
//
//	return 0;
//}
