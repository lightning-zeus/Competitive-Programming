#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <fstream>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h> //works like magic, but at cost.
using namespace std;
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout<<x<<endl;
#define fo(i, n) for(int i=0; i<n; i++)
#define fk(i, k, n) for(int i=k; i<=n; i++)
#define fn(i, n) for(int i=n-1;i>=0;i--)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define lli long long int
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<lli, lli>	pl;
typedef vector<int>		vi;
typedef vector<lli>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
long long int low(vector<long long int> v, long long int qt,long long int n){
    lli k;
    if(binary_search(v.begin(),v.end(),qt)==true){
        k = lower_bound(v.begin(),v.end(),qt) - v.begin();
        k--;
        if(k<0||k>n-1){
          cout<<"X"<<" ";
        }else{
         cout<<v[k]<<" ";
        }
        return 1;
    }
}long long int upp(vector<long long int> v, long long int qt, long long int n){
    long long int k = upper_bound(v.begin(),v.end(),qt) - v.begin();
        if(k<0||k>n-1){
           cout<<"X"<<"\n";
       }else{
           cout<<v[k]<<"\n";
       }
            return 0;
    }


       

int main() {
     lli n;
     cin>>n;
     vl v;
     lli r;
     fo(i,n){
       
       cin>>r;
        v.push_back(r);
     }lli q;
     cin>>q;
     lli qt;
     while(q--){
         cin>>qt;
         low(v,qt,n);
         upp(v,qt,n);
         }


         
     
    
    return 0;
}