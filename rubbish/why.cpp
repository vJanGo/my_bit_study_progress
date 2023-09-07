#include<stdio.h>
#include<string.h>
int main(){
	char s[1000]="Niu mo da chou bi op wan sui";
	char a1[1000][1000]={0};
	char a2[1000]={0};
	//gets(s);
	char* p=s;
	while(*p!=32){
		p++;
	}
	int x=-1,y=0;
	while(*p){
		if(*p==32&&*(p+1)){
			x++;
			y=0;
			*p=0;			
		}
		else{
			a1[x][y++]=*p;
		}
		p++;
	}
	for(int i=0;i<=x;i++){
		for(int j=i+1;j<=x;j++){
			if(strcmp(a1[i],a1[j])==1){
				strcpy(a2,a1[i]);
				strcpy(a1[i],a1[j]);
				strcpy(a1[j],a2);
			}
			for(int k=0;k<21;k++){
				a2[k]=0;
			}
		}
	}
	printf("%s ",s);
	for(int i=0;i<=x;i++){
		printf("%s",a1[i]);
		if(i!=x){
			printf(" ");
		}
	}
	puts("");
	return 0;
}