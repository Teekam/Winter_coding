# include <bits/stdc++.h>
using namespace std;
int main (){
	long long int t,n,i;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		i=1;
		while(n/i!=0){
			i*=2;
		}
		printf("%lld\n",min(abs(n-i),abs(n-i/2)) );
	}


	return 0;
}