#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

typedef pair<char, long> Pair;
inline bool operator<(Pair& l, Pair& r) { return l.second % 2 == 0; }

int main() {
  map<char, long> letters;
  char c;
  long i, len;
  string input;

  getline(cin, input);
  len = input.length();

  for (i = 0; i < len; i++) {
    c = input[i];
    if (letters.count(c) > 0) {
      letters[c]++;
    } else {
      letters[c] = 1;
    }
  }

  int odds = 0;
  for (auto elem : letters) {
    if (elem.second % 2 != 0) {
      odds++;
    }
  }
  if (odds > 1) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }

  vector<Pair> vec(letters.begin(), letters.end());
  sort(vec.begin(), vec.end());

  char result[input.length() + 1];
  result[input.length()] = '\0';

  int l = 0, r = input.length() - 1;

  for (Pair letter : vec) {
    while (letter.second != 0) {
      result[l++] = letter.first;
      letter.second--;

      if (letter.second == 0) {
        break;
      }

      result[r--] = letter.first;
      letter.second--;
    }
  }

  string str(result);
  cout << str << endl;
}
