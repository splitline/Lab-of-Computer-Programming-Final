#include <stdio.h>
int main(){
	long long int data_num,x,k;
	scanf("%lld",&data_num);
	while(data_num--){
		scanf("%lld%lld",&x,&k);
		if(x%k==0)
			printf("0 %lld\n",k);
		else
			printf("%lld %lld\n",-x,x);
	}
}
