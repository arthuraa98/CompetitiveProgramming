#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &a, &b);
		(a != b) ? ((a > b) ? printf(">\n") : printf("<\n")) : printf("=\n");
	}
return 0;
}
