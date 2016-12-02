#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	char in[25];
	while(~scanf("%s",in)){
		int s=0;
		for(int i=0;i<strlen(in);i++){
			if(in[i]<='z'&&in[i]>='a')s+=in[i]-'a'+1;
			else if(in[i]<='Z'&&in[i]>='A')s+=in[i]-'A'+27;
		}
		int f=1;
		for(int i=2;i<=sqrt(s);i++){
			if(s%i==0){
				f=0;
				break;
			}
		}
		printf("%s\n",(f?"It is a prime word.":"It is not a prime word."));
	}
}
