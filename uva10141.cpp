#include <stdio.h>
#include <string.h>
int main(){
	int n,p,t=1;
	while(~scanf("%d%d",&n,&p)&&(n||p)){
		if(t!=1)
			printf("\n");
		char tmp[100]={0},name[100]={0},winner[100]={0};
		getchar();
		for(int i=0;i<n;i++)gets(tmp);
		double in[2],max[2]={2147483647,0};
		for(int i=0;i<p;i++){
			gets(name);
			scanf(" %lf%lf ",&in[0],&in[1]);
			for(int j=0;j<in[1];j++)gets(tmp);
			if(in[1]>max[1]||(in[1]==max[1]&&in[0]<max[0])){
				strcpy(winner,name);
				max[0]=in[0];
				max[1]=in[1];
			}
		}
		printf("RFP #%d\n%s\n",t++,winner);
	}
}
