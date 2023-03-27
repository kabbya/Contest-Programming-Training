#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;
bool vis[MAXN+2];
vector<int> primes;

/// find out all the prime numbers from 1 to N
/// Time complexity: O ( n log log n )

void seive(){

    vis[0] = vis[1] = 1; /// 1 denotes Not a prime number

    for(int i=2; i*i<=MAXN; i++){
        if(vis[i]) continue;
        for(int j=i*i; j<=MAXN; j+=i)
            vis[j]=1;
    }

    for(int i=2; i<=MAXN; i++)
        if(!vis[i]) // if(vis[i]==0)
            primes.push_back(i);
}

int main(){

    seive();
    cout << primes.size() << "\n";
    for(auto i:primes) cout << i << " ";
    return 0;
}
