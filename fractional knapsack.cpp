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

void maxProfit(vector<int> profit, 
               vector<int> weight, int N) 
{ 
  
    // Number of total weights present 
    int numOfElements = profit.size(); 
    int i; 
  
    // Multimap container to store 
    // ratio and index 
    multimap<double, int> ratio; 
  
    // Variable to store maximum profit 
    double max_profit = 0; 
    for (i = 0; i < numOfElements; i++) { 
  
        // Insert ratio profit[i] / weight[i] 
        // and corresponding index 
        ratio.insert(make_pair( 
            (double)profit[i] / weight[i], i)); 
    } 
  
    // Declare a reverse iterator 
    // for Multimap 
    multimap<double, int>::reverse_iterator it; 
  
    // Traverse the map in reverse order 
    for (it = ratio.rbegin(); it != ratio.rend(); 
         it++) { 
  
        // Fraction of weight of i'th item 
        // that can be kept in knapsack 
        double fraction = (double)N / weight[it->second]; 
  
        // if remaining_weight is greater 
        // than the weight of i'th item 
        if (N >= 0 
            && N >= weight[it->second]) { 
  
            // increase max_profit by i'th 
            // profit value 
            max_profit += profit[it->second]; 
  
            // decrement knapsack to form 
            // new remaining_weight 
            N -= weight[it->second]; 
        } 
  
        // remaining_weight less than 
        // weight of i'th item 
        else if (N < weight[it->second]) { 
            max_profit += fraction 
                          * profit[it->second]; 
            break; 
        } 
    } 
  
    // Print the maximum profit earned 
    cout <<fixed<<setprecision(3)<<max_profit; 
} 
  
// Driver Code 
int main() 
{   
    // Size of list 
    int size,N;
    cin>>size>>N;
  
    // Given profit and weight 
    vector<int> profit(size), weight(size); 
  
    fo(i,size){
        cin>>profit[i]>>weight[i];
    }
  
    
  
    // Function Call 
    maxProfit(profit, weight, N); 
}