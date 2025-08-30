#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll power(ll a, ll b) {
  if (b == 0)
    return 1;
  if (b < 0)
    return 1 / power(a, -b);
  return a * power(a, b - 1);
}

int main() {
  ll a, b;
  cin >> a >> b;
  cout << power(a, b);
}
