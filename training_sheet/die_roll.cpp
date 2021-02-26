#include <iostream>
#include <cmath>

using namespace std;

int gcd(int x, int y) {
  if (y == 0)
    return x;

  return gcd(y, x%y);
}

int main() {
  int w, y;
  
  cin >> w >> y;
  int s = max(w, y);
  int t = 6-s+1;
  int g = gcd(t, 6);
  cout << t / g << "/" << 6/g << endl;

  return 0;
}