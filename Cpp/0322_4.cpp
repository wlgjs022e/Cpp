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
//	Movie mv[3] = {Movie("�����̴���",8.9) , Movie("�̻��� ������ ������",7.3) ,  Movie("�� ��Ʈ��",9.5) };
//
//	
//
//	for (int i = 0; i < 3; i++) {
//		cout << "��ȭ�� : " << mv[i].getprint() << " , ���� : " << mv[i].getprint1() << endl;
//	}
//	
//	Movie *mp;
//	mp = mv; // mp �� mv �� �ּҰ� �� 
//
//	for (int i = 0; i < 3; i++) {
//		
//		cout << "��ȭ�� : " << mp->getprint() << " , ���� : " << mp->getprint1() << endl;
//		mp++; // �ּ� + 1���� 
//	}
//	return 0;
//}