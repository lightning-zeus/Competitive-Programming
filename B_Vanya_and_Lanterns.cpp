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
     int l,n;
     cin>>n>>l;
     vector<int> v;
     int count=0;
     fo(i,n){
         int r;
         cin>>r;
         if(r==0)
         count++;
         v.push_back(r);
     }if(count==0)
     v.push_back(0);
     sort(v.begin(),v.end());
     float r = (float)l,s=0;
     float mid;
     while(r>=s){
         mid = s+((float)r - (float)s) / 2;
         int i=0,count=0;
         while(i<=n-1){
             float dis = (float)(v[i+1]-v[i])/(float)2;
       if(dis<=mid){
       count++;
       i++;
           }}
         if(count>=n){
             r = mid; 
             
         }else{
           s = mid;
         }

     }cout<<mid<<"\n";

    
    return 0;
}