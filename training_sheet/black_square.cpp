#include <iostream>
#include <string>

using namespace std;

int main() {
  string inp;
  int a[4], s = 0;

  for (int i = 0; i < 4; i++) 
    cin >> a[i];

  cin >> inp;
  for (const char c : inp) 
    s += a[c - '1'];

  cout << s << endl;

  return 0;
}