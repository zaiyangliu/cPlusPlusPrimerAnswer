#include <iostream>
#include <string>
using namespace std;

int main(){
  string s = "/.+(STL).*$lSTL/";
  string filter = "STL";
  string t = s;
  cout << t << endl;
  string::size_type pos = 0;
  string::size_type last = 0;
  string::size_type n;
  while((pos = t.find(filter, pos)) != string::npos){
    t.erase(last, pos - last);  //last指向删除的最后一个元素的下一个元素位置
    pos = last = last + filter.size(); //指向下一个要被删除的元素的第一个元素
    cout << '\t' << "pos:" << pos << endl;
  }

  t.erase(last, t.size() - last);
  cout << t << endl;

  return 0;
}
