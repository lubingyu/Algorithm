#include <iostream>


using namespace std;

const int N = 1e5 + 10;
int q[N];

void qsort(int l, int r) {
	if (l >= r) return;
	int i = l - 1, j = r + 1, x = q[l + r >> 1];
	while (i < j) {
		while (q[++i] < x);
		while (q[--j] > x);
		if (i < j) swap(q[i], q[j]);

	}
	qsort(l, j);
	qsort(j + 1, r);

}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &q[i]);
	qsort(0, n - 1);
	for (int i = 0; i < n; i++) printf("%d ", q[i]);

	return 0;
}

