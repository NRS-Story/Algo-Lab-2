#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sum_of_digit(ll n) {
  if (n > 0)
    return n + sum_of_digit(n - 1);
  else
    return 0;
}

int main() {
  ll n;
  cin >> n;
  cout << sum_of_digit(n);
}
