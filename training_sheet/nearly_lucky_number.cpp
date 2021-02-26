#include <iostream>
#include <string>

using namespace std;

bool lucky(int n) {
  if (n == 0) return false;

  while (n) {
    int d = n % 10;

    if (d != 4 && d != 7) 
      return false;

    n /= 10;
  }
  return true;
}

int main() {
  string inp;
  int n = 0;

  cin >> inp;
  for (char c : inp) {
    if (c == '4' || c == '7')
      n++;
  }

  cout << (lucky(n) ? "YES" : "NO") << endl;

  return 0;
}