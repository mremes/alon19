#include <iostream>
#include <cmath>

using namespace std;

typedef int64_t ll;

int main() {
  ll row, col;
  cin >> row >> col;

  ll l = max(col, row);
  ll m = col > row ? col - row : row - col;
  ll result = (l-1)*(l-1) + l;
  result += col > row ? (col % 2 == 0 ? m : -m) : (row % 2 == 0 ? -m : m);
  cout << result << endl; 
}
