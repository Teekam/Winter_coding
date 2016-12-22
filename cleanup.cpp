# include <bits/stdc++.h>
using namespace std;
int main(){
	int t,m,i,n,farji,counter;
	int array[1005] = {};
	
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		for(i=1;i<=m;i++){
			scanf("%d",&farji);
			array[farji] = -1;
		}
		//for(i=1;i<=n;i++) printf("%d ",array[i] );
		
		counter=1;

		for(i=1;i<=n;i++){
			if(array[i]==0){
				if(counter%2)
					printf("%d ",i );
				counter++;
			}
		}
		printf("\n");

		counter = 0;

		for(i=1;i<=n;i++){
			if(array[i]==0){
				if(counter%2)
					printf("%d ",i );
				counter++;
			}
		}
		printf("\n");

		for(i=0;i<1005;i++) array[i]=0;
	}
	return 0;
}