#include <iostream>
#include <tuple>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  string name, role;
  vector<tuple<string, string, int>> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> name >> role;
    v.push_back(make_tuple(name, role, i));
  }

  sort(v.begin(), v.end(), [](auto& f, auto& s) {
      if (get<1>(f) == "rat") {
        if (get<1>(s) == "rat") 
          return get<2>(f) < get<2>(s);
        else
          return true;
          } else if (get<1>(f) == "woman" || get<1>(f) == "child") {
          if (get<1>(s) == "woman" || get<1>(s) == "child") 
            return get<2>(f) < get<2>(s);
          else if (get<1>(s) == "rat") 
            return false;
          else
            return true;
            } else if (get<1>(f) == "man") {
            if (get<1>(s) == "man")
              return get<2>(f) < get<2>(s);
            else if (get<1>(s) == "captain")
              return true;
            else
              return false;
            } else {
              if (get<1>(s) == "captain")
                return get<2>(f) < get<2>(s);
              else
                 return false;
            }
  });

  for (auto e : v)
    cout << get<0>(e) << endl;

  return 0;
}