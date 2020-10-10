#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int no = log10(b)+1;
    a = a*pow(10,no);
    int number = a+b;
    int temp = sqrt(number);
    temp *= temp;
    if(temp == number)
    cout<<"Yes"<<"\n";
    else{
        cout<<"No"<<"\n";
    }
    






    return 0;
}
