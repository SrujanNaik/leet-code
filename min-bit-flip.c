#include<stdio.h>

unsigned long long int minBitFlips(unsigned long long int,unsigned long long int);
void main(){
	unsigned long long int start,goal;

	start = 9632846;
	goal = 7025158;

	int ans;
	ans = minBitFlips(start,goal);
	printf("%d",ans);
}


unsigned long long int minBitFlips(unsigned long long int start,unsigned long long int goal){
	unsigned long long int temp,s_bin=0,rem=0,place=1,max,max1=0,max2=0,flip=0;

	temp = start;

	while(temp){
		rem   = temp % 2;  
       		temp   = temp / 2;  
	        s_bin   = s_bin + (rem * place);  
       		place = place * 10;  
		max1++;
	}
	unsigned long long int temp2,g_bin=0,rem1=0,place1=1;

	temp2 = goal;

	while(temp2){
		rem1   = temp2 % 2;  
       		temp2   = temp2 / 2;  
	        g_bin   = g_bin + (rem1 * place1);  
       		place1 = place1 * 10;  
		max2++;
	}        
	max = (max1>max2)?max1:max2;
	printf("%lld , %lld",s_bin,g_bin);

	for(unsigned long long int i=0;i<=max;i++){
		if((s_bin%10)!=(g_bin%10)){
			flip++;
		}
		s_bin = s_bin/10;
		g_bin = g_bin/10;
	}
	return flip;

}



