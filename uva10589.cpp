#include <stdio.h>
int main(){
	int n,a;
	while(~scanf("%d%d",&n,&a)&&n!=0){
		double m=0,x,y;
		for(int i=0;i<n;i++){
			scanf("%lf%lf",&x,&y);
			if((x>0&&y>0)&&(x*x+y*y<=a*a)&&((x-a)*(x-a)+y*y<=a*a)&&((x-a)*(x-a)+(y-a)*(y-a)<=a*a)&&(x*x+(y-a)*(y-a)<=a*a))
			  m++;
		}
		printf("%.5lf\n",(m/n)*a*a);
	}
}
