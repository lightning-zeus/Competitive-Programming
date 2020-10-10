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
#include <iomanip>
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

int main() {
   lli n;
   vector<lli> v,c1,c2;
   cin>>n;
   fo(i,n){
       lli r;
       cin>>r;
       v.push_back(r);
       if(i==0)
       c1.push_back(v[0]);
       else{
           c1.push_back(r+c1[i-1]);
       }
   }sort(v.begin(),v.end());
   c2.push_back(v[0]);
   fk(i,1,n-1)
   c2.push_back(v[i]+c2[i-1]);
   lli m,l,r,type;
   cin>>m;
   while(m--){
       cin>>type>>l>>r;
       if(type==1){
           if(l==1)
    cout<<c1[r-1]<<"\n";
    else
     cout<<c1[r-1]-c1[l-2]<<"\n";
       }
       
       else{
         if(l==1)
    cout<<c2[r-1]<<"\n";
    else
    cout<<c2[r-1] - c2[l-2]<<"\n";
       }
       
   }
   
      
    return 0;
}