# include <stdio.h>
int main (){
	char cipher[27],coded[27],ch;
	int n,m,i;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++) scanf("%c",&cipher[i]);
	for(i=0;i<n-1;i++){
		coded[i]=cipher[i+1];
	}
	coded[n-1]=cipher[0];

	scanf("%d",&m);
	int count=0,flag;
	getchar();
	while(count<m){
		ch = getchar();
		flag=0;
		if(ch == '\n'){
			count++;
			//printf("%d ",count );
			printf("\n");
		}
		else{
			for(i=0;i<n;i++){
				if(ch==cipher[i]){
					flag=1;
					printf("%c",coded[i] );
				}
			}
			if(!flag) printf("%c",ch );
		}
	}
	return 0;
}