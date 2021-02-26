#include <iostream>
#include <string>

using namespace std;

int main() {
  string inp;
  string inst;
  int p = 1;

  cin >> inp >> inst;
  for (int i = 0; i < inst.size(); i++) {
    if (inst[i] == inp[p-1]) {
      p++;
    }
  }

  cout << p << endl;

  return 0;
}