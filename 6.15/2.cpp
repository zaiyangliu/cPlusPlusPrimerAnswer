#include <iostream>
#include <string>
using namespace std;

int main(){
  string s = "/.+(STL).*$lSTL/";
  string filter = "STL";
  string t = s;
  string::iterator here = t.begin();
  string::iterator there;
  string::size_type cur = 0; //剩余字符串的目前位置
  string::size_type pos = 0;

  while((pos = t.find(filter, pos)) != string::npos){
    there = here + pos - cur;
    t.erase(here, there);
    cur += filter.size();
    pos = cur;
    here = t.begin() + cur;
  }

  t.erase(here, t.end());
  cout << t << endl;
  return 0;
}
