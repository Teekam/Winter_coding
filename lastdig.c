# include <stdio.h>
int main(){
	int a,b,t,temp;
	
	scanf("%d",&t);
	int arr[10][5];
	arr[2][1]=2;arr[2][2]=4;arr[2][3]=8;arr[2][0]=6;
	arr[3][1]=3;arr[3][2]=9;arr[3][3]=7;arr[3][0]=1;
	arr[7][1]=7;arr[7][2]=9;arr[7][3]=3;arr[7][0]=1;
	arr[8][1]=8;arr[8][2]=4;arr[8][3]=2;arr[8][0]=6;

	while(t--){
		scanf("%d %d",&a,&b);
		a=a%10;
		temp=b%4;
		if(b==0 || a==1){
		 	printf("1\n");
		 } 
		else if(a==0 || a==5 || a==6)
			printf("%d\n",a );

		else if(a == 2 || a == 3 || a==7 || a == 8) {

			 printf("%d\n",arr[a][temp]);

		}
		else if(a == 4){
			if(temp%2) printf("4\n");
			else printf("6\n");
		}
		else if(a==9){
			if(b%2) printf("9\n");
			else printf("1\n");
		}

	}
	return 0;
}