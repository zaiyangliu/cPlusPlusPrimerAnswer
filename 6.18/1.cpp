#include <iostream>
#include <string>
using namespace std;

int main(){
  string quote1("When lilacs last in the dooryard bloom'd");
  string quote2("The child is father of the man");
  string sentence;

  sentence.assign(quote2.begin(), quote2.begin() + 12);
  sentence.append(quote1, 16, 16);
  cout << "The sentence is '" << sentence << "'\n";

  return 0;
}
