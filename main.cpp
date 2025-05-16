#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "enter player name:" << endl;
  string player_name;
  string* str = new string("hello");
  cin >> player_name;
  cout << "welcome " << player_name << endl;
  return 0;
}