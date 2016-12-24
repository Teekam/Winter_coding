# include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long long n,n1,sum;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		while(1){
			sum = 0;
			n1=n;
			while(n1!=0){
				sum+=n1%10;
				n1=n1/10;
			}
			if(n%sum == 0){
				printf("%lld\n",n );
				break;
			}
			else n++;
		}
	}

	return 0;
}