#include <iostream>
#include <string>


using namespace std;

const int N = 1e5 + 10;
int stk[N], tt;

int main() {
	string str;
	int m;
	scanf("%d", &m);
	while(m--) {
		cin >> str;
		if (str == "push") {
			int x;
			scanf("%d", &x);
			stk[++tt] = x;
		}
		else if (str == "pop") {
			tt--;
		}
		else if (str == "empty") {
			if (tt) puts("NO");
			else puts("YES");
		}
		else 
			printf("%d\n", stk[tt]);
	}
	return 0;
}
