#include<bits/stdc++.h>
using namespace std;

///time complexity: O( n root(n) )
/// check the more efficient code

int divisorsCount(int n){
    int cnt=0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cnt++;
            if(i!=n/i) cnt++;
        }
    }

    return cnt;
}


int main(){

    int n;
    cin >> n;
    vector<int> squares;
    for(int i=1; i<=n; i++){
        if(divisorsCount(i)%2==1){
            squares.push_back(i);
        }
    }

    for(int i=0; i<(int)squares.size(); i++)
        cout << squares[i] << " ";

    return 0;
}
