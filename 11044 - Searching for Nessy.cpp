#include <bits/stdc++.h>

using namespace std;

int main() {
	int TC, row, col;
	scanf("%d", &TC);
	while (TC--) {
		scanf("%d %d", &row, &col);
		printf("%d\n", int(row/3) * int(col/3));
	}
return 0;
}
