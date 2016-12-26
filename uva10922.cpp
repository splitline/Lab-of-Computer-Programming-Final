#include <stdio.h>
#include <string.h>
int count(char* N,int c);
int main(){
    char N[1010];
    while(~scanf("%s",N)){
        if(!strcmp(N,"0"))break;
        printf("%s",N);
        int degree=count(N,0);
        if(degree==-1)
            printf(" is not a multiple of 9.\n");
        else
            printf(" is a multiple of 9 and has 9-degree %d.\n",degree);
    }
}
int count(char* N,int c){
    int S=0;
    for(int i=0;i<strlen(N);i++)
        S+=N[i]-'0';
    if(S>9){
        sprintf(N,"%d",S);
        c+=1;
        count(N,c);
    }
    else
        return S%9==0?c+1:-1;
}
