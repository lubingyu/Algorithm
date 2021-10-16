#include <iostream>


using namespace std;

const int N = 1e5 + 10;

int m;
int e[N], l[N], r[N], idx;

void insert(int a, int x) {
	e[idx] = x;
	l[idx] = a, r[idx] = r[a];
	l[r[a]] = idx, r[a] = idx++;
}

void remove(int a) {
	l[r[a]] = l[a];
	r[l[a]] = r[a];
}

int main() {
	scanf("%d", &m);
	r[0] = 1, l[1] = 0;
	idx = 2;
	while (m--) {
		string op;
		cin >> op;
		int k, x;
		if (op == "L") {
			scanf("%d", &x);
			insert(0, x);
		}
		else if (op == "R") {
			scanf("%d", &x);
			insert(l[1], x);
		}
		else if (op == "D") {
			scanf("%d", &k);
			remove(k + 1);
		}
		else if (op == "IL") {
			scanf("%d%d", &k, &x);
			insert(l[k + 1], x);
		}
		else {
			scanf("%d%d", &k, &x);
			insert(k + 1, x);
		}
	}	
	for (int i = r[0]; i != 1; i = r[i]) printf("%d ", e[i]);
	puts("");
	return 0;
}
