#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int romanToInteger(const char* s)
{
	int i,j,size,number;
	size = strlen(s);
	int values[8] = {0}; // Initialize all to 0
    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;
    printf("working");

 for (int i = 0; i < length; i++) {
        int current = values[(unsigned char)s[i]];
        int next = (i + 1 < length) ? values[(unsigned char)s[i + 1]] : 0;
        
        // If the current value is less than the next value, subtract it
        if (current < next) {
            result -= current;
        } else {
            result += current;
        }
    }
	return number;

}




int main()
{
	const char *r;
	
	r = "III";
	printf("working");
	int ans = romanToInteger(r);
	printf("working");
	printf("%d",ans);
	return 0;
}
