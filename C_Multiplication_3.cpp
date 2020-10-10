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
#define lli long long int
#define llb double 
#define deb(x) cout<<x<<endl;
#define fo(i, n) for(i=0; i<n; i++)
#define fk(i, k, n) for(i=k; i<n; i++)
#define fn(i, n) for(i=n-1;i>=0;i--)


int main() {
	lli a, res;
    double b;
    cin>>a>>b;
    int b_int, b_frac=0;
    b_int = floor(b)*100;
    b_frac = (b - (b_int))*100;
    b_int *= 100;
    b_int = b_int+b_frac;
    cout<<(a*b_int)/100<<"\n";


    
    
	
	return 0;
}