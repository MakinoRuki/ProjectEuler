#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#define N 2000000
using namespace std;
typedef long long ll;
bool prim[N];
vector<int> prims;
ll sum;
int main() {
	for (int i = 2; i * i < N; ++i) {
		if (!prim[i]) {
                     // cout<<i<<endl;
		//	prims.push_back(i);
			for (int j = i * i; j < N; j += i) {
				prim[j] = true;
			}
		}
	}
	sum = 0LL;
	for (int i = 2; i < N; ++i) {
        if (!prim[i]) {
        	prims.push_back(i);
        	sum += (ll)i;
        }
    }
    cout<<sum<<endl;
	cout<<prims.size()<<" "<<prims[10000]<<endl;
	system("pause");
	return 0;
}
