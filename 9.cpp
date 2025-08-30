#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll even_sum(ll n) {
  if (n <= 0)
    return 0;
  if (n % 2 != 0)
    return even_sum(n - 1);
  return n + even_sum(n - 2);
}

int main() {
  ll n;
  cin >> n;
  cout << even_sum(n);
}
