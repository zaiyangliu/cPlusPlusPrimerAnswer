#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main(){
  string line1 = "We were her pride of 10 she named us --";
  string line2 = "Benjamin, Phoenix, the Prodigal";
  string line3 = "and perspicacious pacific Suzanne ";
  string sentence = line1 + ' ' + line2 + ' ' + line3;
  string letters ("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
  string pun_space  (" ,");
  cout <<'"' << sentence << '"' << endl;
  string::size_type pos = 0, prev_pos = 0;
  typedef pair<short, string> track;
  vector<track>  words;
  string  word;
  short len;
  int min = sentence.length();
  int max = 0;
  while((prev_pos = sentence.find_first_of(letters, prev_pos)) != string::npos){
    pos = sentence.find_first_of(pun_space, prev_pos);
    len = pos - prev_pos;
    word = sentence.substr(prev_pos, len);
    cout << word << endl;
    words.push_back(make_pair(len, word));
    if(min > len)
      min = len;
    if(max < len)
      max = len;
    prev_pos = pos;
  }

  int i;
  cout << "MIN\n";
  for(i = 0; i < words.size(); ++i){
    if(min == words[i].first)
      cout << words[i].first << " " << words[i].second << endl;
  }

  cout << "MAX\n";
  for(i = 0; i < words.size(); ++i){
    if(max == words[i].first)
      cout << words[i].first << " " << words[i].second << endl;
  }

  return 0;
}


