#include <stdio.h>
#include <stdlib.h>
int compare (const void * a, const void * b){
	if ( *(int*)a <  *(int*)b ) return -1;
	if ( *(int*)a == *(int*)b ) return 0;
	if ( *(int*)a >  *(int*)b ) return 1;
}
int main(){
	int r,n;
	while(~scanf("%d%d",&r,&n)&&r!=-1&&n!=-1){
		int *p=(int*)malloc(n*sizeof(int));
		for(int i=0;i<n;i++)scanf("%d",&p[i]);
		qsort(p,n,sizeof(int),compare);
		int ans=0;
		for(int i=0;i<n;){
			int s=p[i];
			while(i<n&&s+r>=p[i])i++;
			int f=p[i-1];
			while(i<n&&f+r>=p[i])i++;
			++ans;
		}
		printf("%d\n",ans);
	}
}
