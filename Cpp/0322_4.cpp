//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//
//class Movie{
//
//private:
//	string n;// char n[25];// string n = "";
//	double number;
//
//
//public:
//	Movie() {}
//	Movie(string a , double b) {
//		n= a;
//		number = b;
//	}
//	
//	char getprint();
//	double getprint1();
//
//};
//
//char Movie::getprint() {
//	
//	cout << n; 
//}
//
//double Movie::getprint1() {
//	cout << number;
//}
//
//int main() {
//
//
//	Movie mv[3] = {Movie("스파이더맨",8.9) , Movie("이상한 나라의 수학자",7.3) , 
//		Movie("더 배트맨",9.5) };
//
//
//	for (int i = 0; i < 3; i++) {
//		cout << "영화명" << mv[i].getprint() << " , 평점 : " << mv[i].getprint1();
//	}
//	
//	Movie *mp;
//	mp = mv;
//
//	for (int i = 0; i < 3; i++) {
//		
//		cout << "영화명" << mp->getprint() << " , 평점 : " << mp->getprint1();
//		mp++;
//	}
//	return 0;
//}