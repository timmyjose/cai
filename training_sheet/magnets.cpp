#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string inp;

  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    inp += s;
  }

  int g = 0;

  for (int i = 0; i < inp.size() - 1; i++) {
    if (inp[i] == inp[i+1]) 
      g++;
  }

  cout << g + 1 << endl;

  return 0;
}