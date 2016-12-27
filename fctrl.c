# include <stdio.h>
int main(){
	int t,n,sum,i;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d",&n);
		int i=5;
		while(i<=n){
			sum+=n/i;
			i*=5;
		}
		printf("%d\n",sum );
	}

	return 0;
}