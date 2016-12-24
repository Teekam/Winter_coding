# include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n,j,count,i,arr[103],farji;
	
	scanf("%d",&t);
	while(t--){
		count=0;
		scanf("%d",&n);
		memset (arr, 0, sizeof(arr));
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		//for(i=1;i<10;i++) printf("%d ",arr[i] );
		//sprintf("\n");
		sort(arr,arr+n);
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				if(arr[i]!=0 && arr[j]  == 2*arr[i]){
					count++;
					arr[i] = arr[j] = 0;
				}
			}
		}
		
		printf("%d\n",count );


	}
	return 0;
}