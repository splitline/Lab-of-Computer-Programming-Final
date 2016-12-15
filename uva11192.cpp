#include <stdio.h>
#include <string.h>
int main(){
	int n;
	char str[105];
	while(~scanf("%d",&n)&&n){
		scanf("%s",str);
		int len=strlen(str);
		n=len/n;
		for(int i=0;i<len;i+=n){
			for(int j=i;j<i+(n%2==0?n/2:n/2+1);j++){
				char tmp=str[j];
				str[j]=str[i+n-(j-i)-1];
				str[i+n-(j-i)-1]=tmp;
			}
		}
		printf("%s\n",str);
	}
}
