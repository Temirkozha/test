#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    pair<int, int> points[n];
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }
    sort(points, points + n);
    for (int i = 0; i < n; i++) {
        cout << points[i].first << " " << points[i].second << endl;
    }
    return 0;
}
