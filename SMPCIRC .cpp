# include <bits/stdc++.h>
using namespace std;
int main(){
	int x1,t,x2,y1,y2,r1,r2;
	double dist;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
		dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		if(dist>abs(r1-r2)){
			printf("O\n");
		}
		else if(dist<abs(r1-r2)){
			printf("I\n");
		}
		else printf("E\n");
	}

	return 0;
}