//#include<iostream>
//
//using namespace std;
//
//
//
//int main() {
//
//	int a, n;
//	int cnt = 0;
//	
//
//	cin >> a;
//
//	for (int i = 0; i < a; i++) {
//
//		cin >> n;
//		bool flag = true;
//		if (n == 1) {
//			continue;
//		}
//		else if (n == 2) {
//			cnt++;
//		}
//		else if (n >=3) {
//			for (int j = 2; j < n; j++) {
//				if (n % j == 0) {
//					flag = false; // ¼Ò¼ö¾Æ´Ô 
//					break;
//				}
//			}
//			if (flag == true) {
//				cnt++;
//			}
//		}
//
//	}
//	cout << cnt;
//
//	return 0;
//}