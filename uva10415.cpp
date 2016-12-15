#include <stdio.h>
#include <string.h>
char noteList[]={'c','d','e','f','g','a','b','C','D','E','F','G','A','B'};
int noteFinger[14][7]={{2,3,4,7,8,9,10},{2,3,4,7,8,9,0},{2,3,4,7,8,0,0},{2,3,4,7,0,0,0},{2,3,4,0,0,0,0},{2,3,0,0,0,0,0},{2,0,0,0,0,0,0},{3,0,0,0,0,0,0},{1,2,3,4,7,8,9},{1,2,3,4,7,8,0},{1,2,3,4,7,0,0},{1,2,3,4,0,0,0},{1,2,3,0,0,0,0},{1,2,0,0,0,0,0}};
int main(){
	int n;
	char in[210];
	scanf("%d",&n);
	gets(in);
	while(n--){
		gets(in);
		int fingerCount[11]={0},fingerPressed[11]={0};		
		for(int i=0;i<strlen(in);i++){
			int noteN=strchr(noteList,in[i])-noteList;
			for(int j=0;noteFinger[noteN][j]!=0;j++)
				if(fingerPressed[noteFinger[noteN][j]]<=1)
					fingerPressed[noteFinger[noteN][j]]+=2;
			for(int j=1;j<=10;j++){
				if(fingerPressed[j]==3)
					fingerPressed[j]=1;
				else if(fingerPressed[j]==2){
					fingerCount[j]++;
					fingerPressed[j]=1;
				}
				else 
					fingerPressed[j]=0;
			}
		}
		for(int i=1;i<=10;i++)printf("%d%c",fingerCount[i],i==10?'\n':' ');
	}
}
