#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
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

lli binarysearch(vector<int>v,lli n,lli k){
    lli s=0,e;
    e = v[n-1];
    lli mid;
    lli finalans;
    while(s<=e){
        mid = (s+e+1)/2;
        int cows = 1, left=0;    
        for(int i = 1;i<n&&cows<k;i++){
            if(v[i]-v[left]>=mid){
                cows++;
                left = i;
            }
        }if(cows>=k){
            finalans = mid;
            s= mid+1;
        }else{
            e = mid-1;
        }
    }
    return (finalans);
}

int main(){
    lli n, k;
    lli t;
    vi v;
    cin>>t;
    while(t--){
        cin>>n>>k;
        fo(i,n){
            int r;
            cin>>r;
            v.push_back(r);
        }sort(v.begin(),v.end());
        cout<<binarysearch(v,n,k)<<"\n";
    }
    
    return 0;
}