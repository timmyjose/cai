#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string inp;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> inp;
    if (inp.size() <= 10) {
      cout << inp << endl;
    } else {
      cout << inp[0] << inp.size() - 2 << inp[inp.size()-1] << endl;
    }
  }

  return 0;
}