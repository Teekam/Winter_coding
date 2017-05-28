# include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,arr[10005];//,arr2[10005];
	scanf("%d %d",&n,&m);

	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int start,end,query;
	while(m--){
		scanf("%d %d %d",&start,&end,&query);
		int  j =0;
		for(i=start-1;i<end;i++){
			if(arr[query-1]>arr[i])
				j++;
		}
		if(arr[query-1] == arr[j+start-1])
			printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}