# include <bits/stdc++.h>
using namespace std;
int main(){
	 int a,b;
	scanf("%d %d",&a,&b);
	 int i=1;
	while(a-i*i>=0){
		i++;
	}

		if((b-(i-1)*i)<0) printf("Valera\n");
		else printf("Vladik\n");
	return 0;
}