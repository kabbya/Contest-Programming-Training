#include<bits/stdc++.h>
using namespace std;

///time complexity: O( root(n) )
vector<int> squares;

void findSquareNumbers(int n){

    for(int i=1; i*i<=n; i++)
        squares.push_back(i*i);
}


int main(){

    int n;
    cin >> n;

    findSquareNumbers(n);

    for(int i=0; i<(int)squares.size(); i++)
        cout << squares[i] << " ";

    return 0;
}
