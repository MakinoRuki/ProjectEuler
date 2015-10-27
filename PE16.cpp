#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#define N 1000010
using namespace std;
int res[N];
typedef long long ll;
int n;
int main() {
	while (cin>>n) {
		memset(res, 0, sizeof(res));
		int cnt = 1;
		res[0] = 1;
		for (int i = 1; i <= 1000; ++i) {
			int pre = 0;
			for (int i = 0; i < cnt; ++i) {
				int add = (res[i] * 2 + pre) / 10;
				res[i] = (res[i] * 2 + pre) % 10;
				pre = add;
			}
			if (pre) {
				res[cnt++] = pre;
			}
		}
		int sum = 0;
		for (int i = 0; i < cnt; ++i) {
			sum += res[i];
		}
		cout<<sum<<endl;
	}
	system("pause");
	return 0;
}
