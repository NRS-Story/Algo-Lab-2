#include <bits/stdc++.h>
#define ll long long
using namespace std;

void reverse_string(string &s, ll idx) {
  if (idx < 0)
    return;
  cout << s[idx];
  reverse_string(s, idx - 1);
}

int main() {
  string s;
  cin >> s;
  reverse_string(s, s.size() - 1);
}
