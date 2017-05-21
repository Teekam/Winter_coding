# include <stdio.h>
int main (){
	int temp,sum=0,iter=6;
	while(iter--){
		scanf("%d",&temp);
		sum+=temp;
	}
	printf("%d\n",sum/6 );

	return 0;
}