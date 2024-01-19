    #include<bits/stdc++.h>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int main() {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b;
        vector<int> c;
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        sort(a.begin() , a.end());
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 > 0) {
                b.push_back(a[i]);
            } else {
                c.push_back(a[i]);   
            }
        }
        reverse(c.begin(),c.end());
        
        for (int i = 0; i < c.size(); i++) {
            cout << c[i] << " ";
        }
        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        return 0;
    }
