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
#define fo(i, n) for(i=0; i<n; i++)
#define fk(i, k, n) for(i=k; i<n; i++)
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
#define tr(it1, a) for(auto it1 = a.begin(); it1 != a.end(); it1++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<lli, lli>	pl;
typedef vector<int>		vi;
typedef vector<lli>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
template<typename... T>
void read(T&... args) {
	((cin >> args), ...);
}

template<typename... T>
void write(T&&... args) { //rvalue reference is new to C++ 
	((cout << args << " "), ...);
}

int main() {
	// 1. C++ Productivity Tips
	// 2. To be used while Coding Interview Prep
	// 3. Solving Problems can take time
	// 4. Writing for loops, reading multiple variables is boring.
	// 5. Debugging Tools are not present in Coding Interviews.
    vector<vi> array;
    int i=0,j,count=0,count1,n,x;
    read(n);
    int c = n;
    fo(i, 2){
        vi v1;
        fo(j, n){
            read(x);
            v1.pb(x);
        }array.pb(v1);
    }while(n>0){
        
            for(int j=0;j<n;j++){
                count1 = array[0][j];
            }
            for(int i=j;i<c;i++){
                count1 += array[1][i];
            }
            write(count);
            if(count1>count)
            count = count1;
            n--;
        }write(count);
    
	
	return 0;
}