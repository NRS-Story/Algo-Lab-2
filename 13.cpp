#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll find_max(ll arr[], ll n) {
  if (n == 1)
    return arr[0];

  ll mx = find_max(arr, n - 1);

  return (arr[n - 1] > mx) ? arr[n - 1] : mx;
}

int main() {
  ll arr[] = {5, 10, 3, 2, 1};
  ll n = sizeof(arr) / sizeof(arr[0]);
  cout << find_max(arr, n);
}
