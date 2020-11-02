#include<iostream>
#include<cmath>
 
using namespace std;
 
// Returns factorial of n 
int fact(int n) { 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
};
 
int nCr(int n, int r) { 
    return fact(n) / (fact(r) * fact(n - r)); 
};
  
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int correct = 0, curr = 0, q = 0;
    for (int i = 0; i < s1.length(); i++){
        // Actual position
        if (s1[i] == '+')
            correct++;
        else 
            correct--;
        if (s2[i] == '+')
            curr++;
        else if (s2[i] == '-')
            curr--;
        else
            q++;
    }
    double ans;
    if (q == 0){
        if (correct == curr)
            ans = 1.0;
        else
            ans = 0.0;
    }
    else if (abs(correct - curr) > q)
        ans = 0.0;
    else{
        int x = (q + abs(correct - curr))/2 ;
        int total = pow(2, q);
        int perms = nCr(q, x);
        ans = (double)perms / (double)total;
    }
    printf("%.12lf\n", ans);
    return 0;
}
 