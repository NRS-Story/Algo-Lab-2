#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fibonacci(ll n) {
  if (n <= 1)
    return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  ll n;
  cin >> n;
  cout << fibonacci(n);
}
