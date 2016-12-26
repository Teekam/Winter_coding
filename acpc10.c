# include <stdio.h>
int main(){
	int a,b,c,temp;
	while(1){
		scanf("%d %d %d",&a,&b,&c);
		if(a==b && b==c && c==0) break;
		else{
			temp = c-b;
			if(temp == b-a) printf("AP %d\n",temp+c);
			else{
				temp = c/b;
				if(temp == b/a) printf("GP %d\n",temp*c );
			}
		}
	}

	return 0;
}