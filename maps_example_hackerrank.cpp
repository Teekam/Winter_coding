#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
    

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,phoneno,i;
    string str;
    map <string, int> map1;
;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        cin>>str>>phoneno;
        map1.insert(make_pair(str,phoneno));
    }
    getchar();
    while(getline(cin,str)){
            map<string, int>::iterator it=map1.find(str);
           if(it != map1.end()){
                cout<<it->first<<"="<<it->second<<endl;
           }
        else printf("Not found\n");
    }
    return 0;
}
