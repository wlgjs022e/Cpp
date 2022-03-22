//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class bank {
//
//private:
//	int money;
//	string n;
//	int passwd;
//	string k;
//
//public:
//	bank() {}
//	bank(string k ,int money , string n, int passwd) {
//		this->money = money;
//		this->n = n;
//		this->passwd = passwd;
//		this->k = k;
//	}
//
//	void start();
//
//};
//
//void bank::start() {
//
//	int a,pointer;
//	string check;
//	int number;
//
//	while (true) {
//
//		cout << k << " " << "계좌" << endl;
// 		cout << "1. 입금" << endl;
//		cout << "2. 출금" << endl;
//		cout << "3. 잔액조회" << endl;
//		cout << "0. 종료" << endl;
//
//		cin >> a;
//
//		if (a==1) {
//			cout << "계좌번호, 패스워드를 입력해주세요" << endl;
//			cin >> check >> number;
//			if (n == check && passwd == number) {
//				cout << "입금금액을 입력해주세요" << endl;
//				cin >> pointer;
//				money += pointer;
//				cout << "입금 되었습니다." << endl;
//				continue;
//			}
//
//			else {
//				while (true) {
//					cout << "계좌번호 및 비밀번호가 틀리셨습니다. 다시입력해주세요." << endl;
//
//					cin >> check >> number;
//
//					if (n == check && passwd == number) {
//						cout << "입금금액을 입력해주세요" << endl;
//						cin >> pointer;
//						money += pointer;
//						cout << "입금 되었습니다." << endl;
//						break;
//					}
//				}
//			}
//		}
//		else if (a==2) {
//			cout << "계좌번호, 패스워드를 입력해주세요" << endl;
//			cin >> check >> number;
//	
//			
//			if (n == check && passwd == number) {
//				cout << "출금금액을 입력해주세요" << endl;
//				cin >> pointer;
//				if (money - pointer <= 0) {
//					cout << "잔고가 부족합니다." << endl;
//					continue;
//				}
//				money -= pointer;
//				cout << "출금 되었습니다." << endl;
//				continue;
//			}
//
//			else {
//				while (true) {
//					cout << "계좌번호 및 비밀번호가 틀리셨습니다. 다시입력해주세요." << endl;
//
//					cin >> check >> number;
//
//					if (n == check && passwd == number) {
//						cout << "출금금액을 입력해주세요" << endl;
//						cin >> pointer;
//						if (money - pointer <= 0) {
//							cout << "잔고가 부족합니다." << endl;
//							continue;
//						}
//						money -= pointer;
//						cout << "출금 되었습니다." << endl;
//						break;
//					}
//				}
//
//
//			}
//		}
//		else if (a==3) {
//			cout << "현재 잔액은 " << money << " 입니다." << endl;
//		}
//		else if (a==0) {
//			cout << "종료되었습니다." << endl;
//			break;
//		}
//
//
//
//
//	}
//
//
//}
//
//int main() {
//
//
//	cout << "호서은행에 오신것을 환영합니다." << endl;
//	bank b[3] = { bank("이상해씨",10000, "111-111-111", 1234), bank("포켓몬",20000, "222-222-222", 1234) , bank("파이리",30000, "333-333-333", 1234)}; //계좌번호 비밀번호 
//	
//	int saram;
//	while (true) {
//		cout << "계좌를 선택해주세요" << endl;
//		cout << "1번 이상해씨 계좌" << endl;
//		cout << "2번 포켓몬 계좌" << endl;
//		cout << "3번 파이리 계좌" << endl;
//		cout << "0번 종료" << endl;
//		cin >> saram;
//
//		if (saram == 1) {
//			b[0].start();
//		}
//		else if (saram == 2) {
//			b[1].start();
//		}
//		else if (saram == 3) {
//			b[2].start();
//		}
//		else if (saram == 0) {
//			cout << "종료되었습니다." << endl;
//			break;
//		}
//	}
//
//	
//
//	return 0;
//}