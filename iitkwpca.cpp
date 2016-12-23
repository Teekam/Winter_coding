# include <bits/stdc++.h>
using namespace std;
int main(){

  set<string> s;
  string str;
  char end;
  int t;
  scanf("%d",&t);
  string temp;
    getline(cin,temp);                     //required to flush input

  while(t--){
  	getline(cin,str);                      //read str from cin 
  	istringstream iss(str);				 // assign str to an istream 
    string word;
    while(iss >> word) {
        s.insert(word);
    }
	cout<<s.size()<<endl;
	s.clear();
  }
  return 0;
}
