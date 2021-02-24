#include <bits/stdc++.h>

using namespace std;

int main() {
	int start, first, second, third;
	while(scanf("%d %d %d %d", &start, &first, &second, &third) == 4) {
		if (start == 0 && first == 0) break;
		printf("%d\n", 1080 + ((start - first + 40) % 40 + (40 + second - first) % 40 + (40 + second - third) % 40) * 9);
	}
return 0;
}
