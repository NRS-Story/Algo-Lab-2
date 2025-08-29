#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll recursion(ll n){
    if(n > 1)
        return n * recursion(n - 1);
    else return 1;
}

int main() {
	ll n; cin >> n;
    cout << recursion(n);
}
