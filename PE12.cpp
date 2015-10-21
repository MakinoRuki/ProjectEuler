#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
ll n;
int main() {
	for (ll i = 1; i <= 20000; ++i) {
		ll tmp = i * (i + 1LL) / 2LL;
		int cnt = 0;
		for (ll j = 1; j * j <= tmp; ++j) {
			if (tmp % j == 0) {
				cnt++;
				if (tmp / j != j) {
					cnt++;
				}
			}
		}
		if (cnt > 500)cout<<i<<" "<<tmp<<" "<<cnt<<endl;
	}
//	system("pause");
	return 0;
}
