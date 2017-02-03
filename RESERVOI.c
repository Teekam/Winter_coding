# include <stdio.h>
int main(){
	int t,n,m,i,j,k;
	char array[1001][1001],farji;
	scanf("%d",&t);
	while(t--){
	
		//scanning and taking input

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
		
		// horizontal checking for every row

		int flag=0;
		char prev,curr;
		for(i=0;i<n;i++){

			j=0;
			while(array[i][j]!='B' && j<m){

				if(array[i][j]=='W'){
					flag=1;
					break;
				}
				else 
					j++;
			}
			if(flag==1) break;
			j++;
			for(;j<m;j++){
				prev=array[i][j-1];                      //brick
				curr=array[i][j];
				if((prev=='A' && curr=='W') || (prev=='W' && curr=='A')){
					flag=1;
					break;
				}				
			}
			if(flag==1) break;

			k=m-1;
			while(array[i][k]!='B' && k>=0){

				if(array[i][k]=='W'){
					flag=1;
					break;
				}
				else 
					k--;
			}
			if(flag==1) break;

		}
		//printf("flag = %d\n",flag );
		// verical checking for every column

		for(j=0;j<m;j++){
			i=0;
			while(array[i][j]!='B' && i<n){
				prev = array[i][j];
				curr = array[i+1][j];
				if (prev=='W' && curr=='A'){
					flag=1;
					break;
				}
				else 
					i++;
			}
			//if(i==n) flag=1;			
		
			for(;i<n;i++){
				if(array[i][j]!='B'){
					flag = 1;
					break;
				}
			}
			
			if(flag==1) break;
		}


		// final verdict
		if(flag==1)
			printf("no\n");
		else
			printf("yes\n");
	}

	return 0;
}