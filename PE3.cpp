#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
	ll n = 600851475143LL;
	for (ll i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			while (n % i == 0) {
				n /= i;
			}
		}
	}
	cout<<n<<endl;
	//system("pause");
	return 0;
}
