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
lli bsearch(vector<lli> v,lli l,lli h,lli x ){
    lli mid = l + floor((h-l)/2);
    if(v[mid]==x)
    return mid;
    else{
        if(v[mid]>x){
            h = mid-1;
            return (bsearch(v,l,h,x));
        }if(v[mid]<x){
            l = mid+1;
            return (bsearch(v,l,h,x));
        }
    }return 0;
}

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     lli t;
     cin>>t;
     while(t--){
         
         lli n,x,p,k,j=0;
         cin>>n>>x>>p>>k;
         
         vl s;
        lli r;
          fo(i,n){
              
              cin>>r;
              s.pb(r);
              if(r==x)
              j++;
              
          }sort(s.begin(),s.end());   

           if(j==0){
              cout<<"-1"<<"\n";
              continue;
          }
          
         else{
             lli low = 0,high = n;
             lli index = bsearch(s,low,high,x)+1;
             if(k==index&&p!=index){
                 cout<<"-1"<<"\n";
                 continue;
             }
             if(p==index){
                 cout<<"0"<<"\n";
                 continue;
             }
             if(p==k){
                 cout<<abs(p-index)<<"\n";
                 continue;
             }if(index<k&&k<p){
                 cout<<"-1"<<"\n";
                 continue;
             }if(k<p&&index>k&&index<p){
                 cout<<"-1"<<"\n";
                 continue;
             }if(k<p&&p<index){
                 cout<<abs(p-index)<<"\n";
                 continue;
             }
             if(p<k&&p>index){
                 cout<<abs(p-index)<<"\n";
                 continue;
             }
             if(p<k&&k>index&&p<index){
                 cout<<"-1"<<"\n";
                 continue;
             }if(p<k&&k<index){
                 cout<<"-1"<<"\n";
                 continue;
             }
              
              
            
              
     }
     } 

          
     
    
    return 0;
}