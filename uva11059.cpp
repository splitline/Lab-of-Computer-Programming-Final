#include <stdio.h>
int main(){
    int n,t=1;
    while(~scanf("%d",&n)){
        int a[20];
        long long int s=-9223372036854775807;
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        for(int i=0;i<n;i++){
            long long int s2=1;
            for(int j=i;j<n;j++){
                s2*=a[j];
                if(s2>s)s=s2;
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n",t++,s>0?s:0);
    }
}
