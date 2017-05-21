# include <stdio.h>
int main (){
int t,flag=0,flag2=0,i;
scanf("%d",&t);
	while(t--){	
		char str[100005];
		flag=0;flag2=0;
		scanf("%s",str);
		for(i=0;str[i]!='\0';i++){
			if(str[i+1]=='1' && str[i]=='0'){
				if(flag==1){
					flag2=1;
					printf("NO\n");
					break;
				}
			}
			else if(str[i]=='1')
					flag=1 ;
		}
		if(flag == 0){                                    // for case 0*
			printf("NO\n");
			flag2=1;
		}
		if(flag2 == 0) printf("YES\n");
	}		
	return 0;
}