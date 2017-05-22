# include <bits/stdc++.h>
using namespace std;
int main (){
	int arr1[105],arr2[105],n,m,i,sum1=0,sum2=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr1[i]);
		sum1+=arr1[i];
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){ 
		scanf("%d",&arr2[i]);
		sum2+=arr2[i];
	}
	if(sum2<sum1){
		for(i=0;i<n;i++){	
			printf("%d ",arr1[i] );
		}
	}
	else
		for(i=0;i<m;i++){	
			printf("%d ",arr2[i] );
		}
	return 0;
}