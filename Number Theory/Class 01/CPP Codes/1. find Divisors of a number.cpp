#include<bits/stdc++.h>
using namespace std;

vector<int> divisors;

//----------------------------------------------------------------------

/// Time complexity: O(n)
void findDivisorsBruteforce(int n){
    for(int i=1; i<=n; i++)
        if(n%i==0)
            divisors.push_back(i);
}

//----------------------------------------------------------------------

/// Time complexity: O( root(n) )
void findDivisors(int n){
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i!=n/i) divisors.push_back(n/i);
        }
    }

    /// ascending order
   sort(divisors.begin(), divisors.end());
}


int main(){

    int n;
    cin >> n;

    findDivisors(n);

    for(auto i:divisors) cout << i << " ";

    return 0;
}
