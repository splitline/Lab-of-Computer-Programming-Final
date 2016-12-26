#include <stdio.h>
#include <stdlib.h>
struct N{
	int s,f;
};
int cmp (const void * a, const void * b){
	return  (*(N *)a).s > (*(N *)b).s ? -1 : 1;
}
int main(){
	int t;
	scanf("%d",&t);
	N in[25];
	int ind=0;
	while(~scanf("%d%d",&in[ind].s,&in[ind].f)){
		if(in[ind].s+in[ind].f==0){
			int time[10]={0},add[25]={0},max=0;
			qsort(in,ind,sizeof(in[0]),cmp);
			for(int i=0;i<ind;i++){
				for(int j=in[i].s;j<in[i].f;j++){
					if(time[j])break;
					if(j==in[i].f-1){
						for(int k=in[i].s;k<in[i].f;k++)time[k]=1;
						max++;
					}
				}
			}
			printf("%d\n",max);
			ind=0;
		}
		else ++ind;
	}
}
