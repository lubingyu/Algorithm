#include <iostream>


using namespace std;

const int N = 1e5 + 10;
int head, e[N], ne[N], idx;

void init() {
	head = -1;
	idx = 0;
}

void add_to_head(int x) {
	e[idx] = x, ne[idx] = head, head = idx++;
}

void add(int k, int x) {
	e[idx] = x, ne[idx] = ne[k], ne[k] = idx++;
}

void remove(int k) {
	ne[k] = ne[ne[k]];
}

int main() {
	int m;
	scanf("%d", &m);
	init();
	while (m--) {
		int k, x;
		char op;
		cin >> op;
		if (op == 'H') {
			scanf("%d", &x);
			add_to_head(x);
		}
		else if (op == 'D') {
			scanf("%d", &k);
			if (!k) head = ne[head];
			else remove(k - 1);
		}
		else {
			scanf("%d%d", &k, &x);
			add(k - 1, x);
		}
	}
	for (int i = head; ~i; i = ne[i]) printf("%d ", e[i]);
	puts("");
	return 0;
}
