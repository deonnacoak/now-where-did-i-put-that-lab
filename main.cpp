#include <iostream>
#include <string>
#include "src/where.hpp"

using namespace std;

int main() {
  string phrase = "The quick brown fox";

  cout << "Location of 'e': " << location(phrase, 'e') << endl;
  cout << "Location of \"quick\": " << location(phrase, "quick") << endl;
  cout << "Location of \"quiet\": " << location(phrase, "quiet") << endl;

  return 0;
}