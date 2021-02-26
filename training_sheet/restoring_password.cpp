#include <iostream>
#include <string>
#include<unordered_map>

using namespace std;

int main() {
  string inp, s;
  unordered_map<string, int> m;

  cin >> inp;
  for (int i = 0; i < 10; i++) {
    cin >> s;
    m[s] = i;
  }

  for (int i = 0; i < inp.size(); i += 10) 
    cout << m[inp.substr(i, 10)];

  cout << endl;

  return 0;
}