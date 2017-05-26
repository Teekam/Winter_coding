# include <bits/stdc++.h>
using namespace std;
#define INF 10000009
int main (){
int n,j,i,min_m=INF,arr[105],flag=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
			min_m = min(min_m,arr[i]);
		}
		for(i=0;i<n;i++){
			if(arr[i]==min_m){
				flag=0;


				for(j=0;j<i;j++){
					if(arr[j]<=arr[j+1]){
						flag=1;
						break;
					}	
				}
				for(j=i+2;j<n;j++){
					if(arr[j-1]>=arr[j]){
						flag=1;
						break;
					}
				}

				if(flag==0){
					printf("Yes\n");
					break;
				}

				for(j=0;j<i-1;j++){
					if(arr[j]<=arr[j+1]){
						flag=1;
						break;
					}	
				}
				for(j=i+1;j<n;j++){
					if(arr[j-1]>=arr[j]){
						flag=1;
						break;
					}
				}


				if(flag==0){
					printf("Yes\n");
					break;
				}



			}
		}
		if(flag==1) printf("No\n");
	return 0;
}