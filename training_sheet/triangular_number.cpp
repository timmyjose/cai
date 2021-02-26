#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  int n;
  unordered_set<int> s;

  int d = 1;
  while (true) {
    int t = d * (d+1) / 2;
    if (t > 500)
      break;
    s.insert(t);
    d++;
  }

  cin >> n;
  if (s.find(n) != s.end())
      cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}