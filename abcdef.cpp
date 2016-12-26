# include <bits/stdc++.h>
using namespace std;
int main(){
	int n,arr[102];
	int i,j,k,l=0,m=0,Array1[1000004],Array2[1000004];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				Array1[l++]=arr[i]*arr[j]+arr[k];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				if(arr[i]!=0)
				Array2[m++]=arr[i]*(arr[j]+arr[k]);
			}
		}
	}
	sort(Array1,Array1+l);
	sort(Array2,Array2+m);

	int count=0,*lo,*hi;
	for(i=0;i<m;i++){
		lo = lower_bound(Array1,Array1+l,Array2[i]);
		hi = upper_bound(Array1,Array1+l,Array2[i]);
		count += (int)(hi-lo);
		 
	}
	printf("%d\n",count );
	return 0;
}