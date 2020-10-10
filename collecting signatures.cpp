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
bool compare(const pair<int,int>&a,const pair<int,int>&b){
    return b.second>a.second;
}

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    set<int> s;
    fo(i, n){
        int r,s;
        cin>>r>>s;
        v.push_back(make_pair(r,s));
    }sort(v.begin(),v.end(),compare);
    int i=0,j=0,count=0;
    while(i<n){
        
        j = i+1;
        while(j<n){
            if(v[i].second<v[j].first){
               
                break;
            }else{
                count++;
                j++;
            }
        }if(count>0){
            s.insert(v[i].second);
            i += count+1;
           
        }if(count==0){
             s.insert(v[i].second);
            i++;
        } count = 0;
    }cout<<s.size()<<endl;
    tr(it,s){
        cout<<*it<<" ";
    }
   
    return 0;
}