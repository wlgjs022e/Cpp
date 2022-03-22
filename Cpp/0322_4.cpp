//#include<iostream>
//#include<cstring>
//using namespace std;
//
//
//class Movie{
//
//private:
//	string n;
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
//	string getprint();
//	double getprint1();
//
//};
//
//string Movie::getprint() {
//	 
//	return n;
//}
//
//double Movie::getprint1() {
//	
//	return number;
//}
//
//int main() {
//
//
//	Movie mv[3] = {Movie("스파이더맨",8.9) , Movie("이상한 나라의 수학자",7.3) ,  Movie("더 배트맨",9.5) };
//
//	
//
//	for (int i = 0; i < 3; i++) {
//		cout << "영화명 : " << mv[i].getprint() << " , 평점 : " << mv[i].getprint1() << endl;
//	}
//	
//	Movie *mp;
//	mp = mv; // mp 에 mv 의 주소가 들어감 
//
//	for (int i = 0; i < 3; i++) {
//		
//		cout << "영화명 : " << mp->getprint() << " , 평점 : " << mp->getprint1() << endl;
//		mp++; // 주소 + 1씩함 
//	}
//	return 0;
//}