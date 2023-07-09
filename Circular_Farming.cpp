#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int ulx, uly, lrx, lry, dx, dy, n;
		cin >> ulx >> uly >> lrx >> lry >> dx >> dy >> n;
		vector<pair<int, int>> trees;
		vector<int> radii;
		for (int j = 0; j < n; j++) {
			int x, y, r;
			cin >> x >> y >> r;
			trees.push_back({x, y});
			radii.push_back(r);
		}
		int count = 0;
		for (int k = min(ulx, lrx); k <= max(ulx, lrx); k++) {
			for (int l = min(uly, lry); l <= max(uly, lry); l++) {
				int dist = (k - dx)*(k - dx) + (l - dy)*(l - dy);
				bool flag = true;
				for (int m = 0; m < n; m++) { 
					if ((k-trees[m].first)*(k-trees[m].first) + (l-trees[m].second)*(l-trees[m].second) <= radii[m]*radii[m]) {
						flag = false;
						break;
					}
					if (dist < (radii[m]+1)*(radii[m]+1)) {
						flag = false;
						break;
					}
				}
				if (flag) count++;
			}
		}
		cout << "Case #" << i+1 << ": " << count << endl;
	}
	return 0;
}