#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare (const void * a, const void * b)
{
	if ( *(int*)a <  *(int*)b ) return -1;
	if ( *(int*)a == *(int*)b ) return 0;
	if ( *(int*)a >  *(int*)b ) return 1;
}
int main(){
	int n;
	while(~scanf("%d",&n)){
		int s[3001]={0},in,prev;
		for(int i=0;i<n;i++){
			scanf("%d",&in);
			if(i>=1)s[i-1]=abs(in-prev);
			prev=in;
		}
		qsort(s,n-1,sizeof(s[0]),compare);
		int f=1;
		for(int i=1;i<n-1;i++){
			if(s[i]-s[i-1]!=1){
				f=0;
				break;
			}
		}
		printf("%s\n",(f?"Jolly":"Not jolly"));
	}
}
