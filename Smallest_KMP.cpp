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
     lli t;
     cin>>t;
     while(t--){
         string s,p;
         cin>>s;
         cin>>p;
         int occ[26]={0};
         fo(i,s.size()){
             int k  = s[i] - 97;
             occ[k]++;
            
         }fo(i,p.size()){
               int k = p[i] - 97;
               occ[k]--;
            } 
         int i =0;
         while((97+i)<p[0]){
             while(occ[i]--)
             cout<<(char)(97+i);
             i++;
         }if((97+i)==p[0]&&occ[i]==0){
             fo(j,p.size())
             cout<<p[j];
            i++;

         }if((97+i)==p[0]&&occ[i]>0){
             string cmp;
             fo(j,occ[i]){
                 cmp += (char)(97+i);
             }if(cmp>p){
                 fo(j,p.size())
                 cout<<p[j];
                 while(occ[i]--)
                cout<<(char)(97+i);
                i++;
             }else{
                while(occ[i]--)
                cout<<(char)(97+i);
                i++;
                fo(j,p.size())
                cout<<p[j]; 
             }
         }while(i<26){
             while(occ[i]--){
                 cout<<(char)(97+i);
             }i++;
         }cout<<"\n";
     }
    
    return 0;
}