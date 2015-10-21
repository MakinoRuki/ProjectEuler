#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
bool check (int a, int b, int c) {
	if (a * a + b * b == c * c) return true;
	if (a * a + c * c == b * b) return true;
	if (b * b + c * c == a * a) return true;
	return false;
}
int main() {
	for (int i = 1; i <= 1000; ++i) {
		for (int j = 1; j <= 1000; ++j) {
			int k = 1000 - i - j;
			if (check(i, j, k)) {
				int res = i * j * k;
				cout<<res<<endl;
				system("pause");
				return 0;
			}
		}
	}
	return 0;
}