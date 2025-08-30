#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll count(ll n) {
  if (n < 0)
    n = -n;
  if (n < 10)
    return 1;
  return 1 + count(n / 10);
}

int main() {
  ll n;
  cin >> n;
  cout << count(n);
}
