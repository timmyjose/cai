#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string inp;
  int x = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> inp;
    if (inp[0] == '+' && inp[1] == '+') 
      ++x;
    else if (inp[0] == 'X') 
      if (inp[1] == '+')
        x++;
      else
        x--;
    else
      --x;
  }

  cout << x << endl;

  return 0;
}