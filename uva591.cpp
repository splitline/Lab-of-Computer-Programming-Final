#include <stdio.h>
#include <math.h>
int main(){
	int n,t=0;
	while(~scanf("%d",&n)&&n!=0){
		int b[55],avg=0,move=0;
		for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
			avg+=b[i];
		}
		avg/=n;
		for(int i=0;i<n;i++)
			move+=fabs(b[i]-avg);
		printf("Set #%d\nThe minimum number of moves is %d.\n\n",++t,move/2);
	}
}
