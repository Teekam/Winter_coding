# include <stdio.h>
int main(){
	int t,n,m,i,j;
	char array[1001][1001],farji;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%c",&farji);
				while(farji!='W' && farji!='B' && farji!='A' ){
					scanf("%c",&farji);
				}
				array[i][j]=farji;
			}
		}
		
	}

	return 0;
}