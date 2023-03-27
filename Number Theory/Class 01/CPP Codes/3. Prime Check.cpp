#include<bits/stdc++.h>
using namespace std;

///time complexity: O(n)
bool checkPrimeMethod1(int n){

    if(n<=1) return false;
    for(int i=2; i<n; i++)
        if(n%i==0)
            return false;

    return true;
}


///time complexity: O( root(n) )
bool checkPrimeMethod2(int n){

    if(n<=1) return false;
    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return false;

    return true;
}


int main(){

    int n;
    cin >> n;
    cout << ( checkPrimeMethod2(n)? "Prime Number" :  "Not a Prime Number") << "\n";

    return 0;
}
