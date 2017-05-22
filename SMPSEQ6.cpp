# include <bits/stdc++.h>
using namespace std;
int main (){
	int arr1[105],arr2[105],n,i,x,j;
	
	scanf("%d%d",&n,&x);
	for(i=1;i<=n;i++) scanf("%d",&arr1[i]);
	for(i=1;i<=n;i++) scanf("%d",&arr2[i]);

	for(i=1;i<=n;i++){	
		for(j=max(1,i-x);j<=min(n,i+x);j++){
			//printf("i=%d j=%d\n",i,j );
			if(arr1[i]==arr2[j]){
				printf("%d ",i );
				break;
			}
		}
	}

	return 0;
}