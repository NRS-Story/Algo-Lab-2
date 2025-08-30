#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool sorted(ll arr[], ll n) {
  if (n <= 1)
    return true;
  if (arr[n - 2] > arr[n - 1])
    return false;
  return sorted(arr, n - 1);
}

int main() {
  ll arr[] = {5, 4, 3, 2, 1};
  ll n = sizeof(arr) / sizeof(arr[0]);
  cout << (sorted(arr, n) ? "YES" : "NO");
}
