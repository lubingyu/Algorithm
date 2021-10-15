#include <iostream>


using namespace std;

typedef long long LL;
const int N = 1e5 + 10;
int q[N], t[N];

LL msort(int l, int r) {
	if (l >= r) return 0;
	int mid = l + r >> 1;
	LL res = msort(l, mid) + msort(mid + 1, r);
	int k = 0, i = l, j = mid + 1;
	while (i <= mid && j <= r)
		if (q[i] <= q[j]) t[k++] = q[i++];
		else {
			t[k++] = q[j++];
			res += mid - i + 1;
		}
	while (i <= mid) t[k++] = q[i++];
	while (j <= r) t[k++] = q[j++];
	for (i = l, j = 0; i <= r; i++, j++) q[i] = t[j];
	return res;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &q[i]);
	LL ans = msort(0, n - 1);
	printf("%lld\n", ans);
	return 0;
}
