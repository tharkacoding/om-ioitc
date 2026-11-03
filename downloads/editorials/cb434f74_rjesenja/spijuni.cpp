#include <cstdio>
#include <algorithm>
using namespace std;

int c[1002][1002];
int best[1002];
int bio[1002];

int main() {

	int n; scanf("%d", &n);

	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			scanf("%d", &c[i][j]);

	for(int i=0; i<n; ++i) {
		scanf("%d", &c[n][i]);
		c[i][n] = c[n][i];
	}

	++n;
	int sol = 0;
	best[0] = 0;
	for(int i=1; i<n; ++i) best[i] = 2000000000;

	int co = 0;

	while(1) {
		int x = -1, bbest = 2000000000;
		for(int i=0; i<n; i++)
			if (!bio[i] && bbest > best[i]) {
				bbest = best[i];
				x = i;
			}
		if (x == -1) break;
		sol += bbest;
		bio[x] = 1;
		if (x == n-1 || bbest == c[n-1][x]) co++;
		for(int i=0; i<n; ++i)
			best[i] = min(best[i], c[x][i]);
	}

	printf("%d\n", sol);
	fprintf(stderr, "%d\n", co);
	return 0;
}
