#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string tostring(int n) {
  string s;

  while (n) {
    int d = n % 10;
    if (d) s += d + '0';
    n /= 10;
  }

  reverse(s.begin(), s.end());

  return s;
}

int main() {
  long a, b, c = 0L;

  cin >> a >> b;
  c = a + b;

  long al = stol(tostring(a));
  long bl = stol(tostring(b));
  long cl = stol(tostring(c));

  if (al + bl == cl)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}