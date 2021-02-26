#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int n, c = 0;
  string inp;
  vector<int> v;

  cin >> n >> inp;
  int i = 0;
  while (true) {
    if (i == inp.size()) break;

    if (inp[i] == 'B') {
      int b = 0;
      c++;
      while (i < inp.size() && inp[i] == 'B') {
        b++;
        i++;
      }

      v.push_back(b);
    } else
      i++;
  }

  cout << c << endl;
  if (!v.empty()) {
    for (auto e : v) 
      cout << e << " ";
    cout << endl;
  }

  return 0;
}