# include <bits/stdc++.h>
using namespace std;
int main (){
int t;
string str;
string::iterator it;
scanf("%d",&t);
getchar();
int index;
while(t--){
	index=1;
	getline(cin,str);
	/*for (it=str.begin();it!=str.begin()+str.size()/2; it++,index++){
		//printf("%d\n",index );
		if(index%2)
		printf("%c",*it );
	}*/
	for(int i=0;i<str.length()/2;i++){

		if(i%2==0){
			printf("%c",str[i] );
		}
	}
	printf("\n");
}


	return 0;
}