# include <bits/stdc++.h>
using namespace std;
int main(){
	int t,c,d,l;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&c,&d,&l);
		if(l%4) printf("no\n");
		else{
			l=l/4;
			if(l<=c+d && l>=d+max(0,c-2*d))
				printf("yes\n");
			else 
				printf("no\n");
		}
	}

	return 0;
}