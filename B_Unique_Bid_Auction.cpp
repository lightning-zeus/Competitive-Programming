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
#define fo(i, n) for(lli i=0; i<n; i++)
#define fk(i, k, n) for(int i=k; i<=n; i++)
#define fn(i, n) for(i=n-1;i>=0;i--)
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




int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
lli t;
cin>>t;
while(t>0){
    t--;
    vector<lli> v,s;
    lli n;
   
    cin>>n;
     
    fo(i,n){
        int r;
        cin>>r;
        v.pb(r),s.pb(r);
    }sort(v.begin(),v.end());
    lli min=0;
    for(int i=1;i<n;i++){
        if(v[1]!=v[0]){
            min = v[0];
            break;
        }
        if(v[i]!=v[i-1]&&v[i]!=v[i+1]){
            min = v[i];
            break;
        }
          
    }if(n==1)
     cout<<1<<"\n";
     else{
    if(min!=0){
        fo(i,n){
            if(s[i]==min)
                cout<<i+1<<"\n";
                
            
        }
    }else{
        cout<<"-1"<<"\n";
    }}
    

}
return 0;
}