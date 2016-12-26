#include <stdio.h>
#include <stdlib.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int I=1;I<=t;I++){
		int n,m;
		scanf("%d%d",&n,&m);
		int *road=(int*)malloc(n*sizeof(int));
		for(int i=0;i<n;i++)scanf("%d",&road[i]);
		printf("Case %d:\n",I);
		int c[10005]={0};
		for(int i=0;i<m;i++){
			int l,r,h;
			scanf("%d%d%d",&l,&r,&h);
			for(int j=l;j<=r;j++)
				if(h>=road[j])c[i]++;
		}
		for(int i=0;i<m;i++)printf("%d\n",c[i]);

		free(road);
	}
}
