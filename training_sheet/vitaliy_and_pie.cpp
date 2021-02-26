#include <iostream>
#include <string>

using namespace std;

const int N = 26;

int a[N] = {0};

int main() {
  int n;
  string inp;

  cin >> n >> inp;

  int k = 0;
  for (int i = 0; i < inp.size(); i++) {
    if (inp[i] >= 'a' && inp[i] <= 'z')
      a[inp[i]-'a']++;
    else {
      if (a[inp[i] + 32 -'a'] != 0)
        a[inp[i] + 32 -'a']--;
      else
        k++;
    }
  }

  cout << k << endl;

  return 0;
}