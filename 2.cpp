#include <bits/stdc++.h>
#define ll long long
using namespace std;

void n_num(ll n) {
  if (n > 0) {
    n_num(n - 1);
    cout << n << ' ';
  }
}

int main() {
  ll n;
  cin >> n;
  n_num(n);
}
