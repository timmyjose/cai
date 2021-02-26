#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  string s = "";
  int i = 1;

  cin >> n;
  while (true) {
    s += to_string(i);
    i++;
    if (s.size() > n) break;
  }

  cout << s[n-1] << endl;

  return 0;
}