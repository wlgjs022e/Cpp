#include<iostream>
#include<vector>

using namespace std;

int main() {

	int M, N;
	cin >> M;
	cin >> N;
	int cnt = 0;
	int min = 10000;

	for (int i = M; M <= N; M++) {
		bool flag = true;
		if (M == 1) {
			continue;
		}
		else if(M ==2) {
			cnt += M;
			min = M;
		}
		else {
			

			for (int j = 2; j < M; j++) {
				if (M % j == 0) {
					flag = false;
					break;
				}
			}
			if (flag == true) {
				cnt += M;
				if (min > M) {
					min = M;
				}
			}
			
		}
		

	}
	if (cnt == 0) {
		cout << -1 << endl;
	}
	else {
		cout << cnt << endl;
		cout << min << endl;
	}
	
	

	return 0;
}