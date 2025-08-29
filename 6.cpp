#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll palindrome(ll n, ll r = 0) {
  if (n == 0)
    return r;
  return palindrome(n / 10, r * 10 + n % 10);
}

int main() {
  ll n;
  cin >> n;
  cout << (n == palindrome(n) ? "YES" : "NO");
}
