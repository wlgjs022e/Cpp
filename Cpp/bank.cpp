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
//		cout << k << " " << "����" << endl;
// 		cout << "1. �Ա�" << endl;
//		cout << "2. ���" << endl;
//		cout << "3. �ܾ���ȸ" << endl;
//		cout << "0. ����" << endl;
//
//		cin >> a;
//
//		if (a==1) {
//			cout << "���¹�ȣ, �н����带 �Է����ּ���" << endl;
//			cin >> check >> number;
//			if (n == check && passwd == number) {
//				cout << "�Աݱݾ��� �Է����ּ���" << endl;
//				cin >> pointer;
//				money += pointer;
//				cout << "�Ա� �Ǿ����ϴ�." << endl;
//				continue;
//			}
//
//			else {
//				while (true) {
//					cout << "���¹�ȣ �� ��й�ȣ�� Ʋ���̽��ϴ�. �ٽ��Է����ּ���." << endl;
//
//					cin >> check >> number;
//
//					if (n == check && passwd == number) {
//						cout << "�Աݱݾ��� �Է����ּ���" << endl;
//						cin >> pointer;
//						money += pointer;
//						cout << "�Ա� �Ǿ����ϴ�." << endl;
//						break;
//					}
//				}
//			}
//		}
//		else if (a==2) {
//			cout << "���¹�ȣ, �н����带 �Է����ּ���" << endl;
//			cin >> check >> number;
//	
//			
//			if (n == check && passwd == number) {
//				cout << "��ݱݾ��� �Է����ּ���" << endl;
//				cin >> pointer;
//				if (money - pointer <= 0) {
//					cout << "�ܰ� �����մϴ�." << endl;
//					continue;
//				}
//				money -= pointer;
//				cout << "��� �Ǿ����ϴ�." << endl;
//				continue;
//			}
//
//			else {
//				while (true) {
//					cout << "���¹�ȣ �� ��й�ȣ�� Ʋ���̽��ϴ�. �ٽ��Է����ּ���." << endl;
//
//					cin >> check >> number;
//
//					if (n == check && passwd == number) {
//						cout << "��ݱݾ��� �Է����ּ���" << endl;
//						cin >> pointer;
//						if (money - pointer <= 0) {
//							cout << "�ܰ� �����մϴ�." << endl;
//							continue;
//						}
//						money -= pointer;
//						cout << "��� �Ǿ����ϴ�." << endl;
//						break;
//					}
//				}
//
//
//			}
//		}
//		else if (a==3) {
//			cout << "���� �ܾ��� " << money << " �Դϴ�." << endl;
//		}
//		else if (a==0) {
//			cout << "����Ǿ����ϴ�." << endl;
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
//	cout << "ȣ�����࿡ ���Ű��� ȯ���մϴ�." << endl;
//	bank b[3] = { bank("�̻��ؾ�",10000, "111-111-111", 1234), bank("���ϸ�",20000, "222-222-222", 1234) , bank("���̸�",30000, "333-333-333", 1234)}; //���¹�ȣ ��й�ȣ 
//	
//	int saram;
//	while (true) {
//		cout << "���¸� �������ּ���" << endl;
//		cout << "1�� �̻��ؾ� ����" << endl;
//		cout << "2�� ���ϸ� ����" << endl;
//		cout << "3�� ���̸� ����" << endl;
//		cout << "0�� ����" << endl;
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
//			cout << "����Ǿ����ϴ�." << endl;
//			break;
//		}
//	}
//
//	
//
//	return 0;
//}