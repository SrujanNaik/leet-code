#include<stdio.h>
#include<string.h>

int countAsterisks(char[]);

void main(){
	int ans;


	char s[] = "yo|uar|e**|b|e***au|tifu|l";

	ans = countAsterisks(s);

	printf("%d",ans);
}

int countAsterisks(char s[]){
	int length,vb=0,output=0;

	length = strlen(s);

	for(int i=0;i<length;i++){
		if(s[i] == '|'){
			vb++;
		}
		else if(s[i] == '*' && ((vb%2) == 0)){
			output++;
		}
	}
	return output;
}


