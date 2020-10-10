# include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int from = 0, to = n;
    int point = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            point = i;
            break;
        }
    }
    
 
    for (int i = point; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            to = i + 1;
            break;
        }
    }
 
    reverse(a.begin() + point, a.begin() + to);
 
 
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            cout << "no";
            return 0;
        }
    }
 
    cout << "yes\n" << point + 1 << " " << to << endl;
}
