# include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x,y,r,x1,y1,i;
	char ch;
	vector< pair<int,int> > a;             // vector of pairs
	scanf("%d",&t);
	while(t--){
		a.clear();                        //empty the vector of pairs
		scanf("%d",&n);
		for(i=0;i<n;i++){
			

			ch = getchar();
			while(ch != 'p' && ch != 'c'&& ch != 'l'){ 
				ch = getchar();
				//printf("scanned%c\n",ch );	
			}
			//

			if(ch == 'p'){
				scanf("%d %d",&x,&y);
				a.push_back(make_pair(x,y));
			}
			else if (ch == 'c'){
				scanf("%d %d %d",&x,&y,&r);
				a.push_back(make_pair(x-r,y-r));
				a.push_back(make_pair(x+r,y+r));
			}
			else if(ch == 'l'){
				scanf("%d %d %d %d",&x,&y,&x1,&y1);
				
				if((y1-y)*(x1-x)>=0){
					a.push_back(make_pair(x1,y1));
					a.push_back(make_pair(x,y));
				}
				else{
					a.push_back(make_pair(x,y1));
					a.push_back(make_pair(x1,y));
					
				}
			}
			
		}
		sort(a.begin(),a.end());
		printf("%d %d %d %d\n",a.front().first,a.front().second,a.back().first,a.back().second);

	}




	return 0;
}