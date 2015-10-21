#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
bool check (int num) {
	int res = 0;
	int tmp = num;
	while (tmp) {
		res = res * 10 + tmp % 10;
		tmp /= 10;
	}
	return res == num;
}
int main() {
	int ans = 0;
	for (int i = 999; i >= 100; --i) {
		for (int j = 999; j >= 100; --j) {
		//	if (i * j >= 580085) cout<<i * j<<endl;
			if (check(i * j)) {
                        ans = max(ans, i * j);
				//cout<<i * j<<endl;
				//system("pause");
				//return 0;
			}
		}
	}
	cout<<ans<<endl;
	//int res = 0;
	//for (int i = 1; i <= 100; ++i) res += i * i;
	//cout<<res<<endl;
	//system("pause");
	return 0;
}
