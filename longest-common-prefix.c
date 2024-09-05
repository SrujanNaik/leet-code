#include<stdio.h>
#include<string.h>
char *longestCommonPrefix(char[][200],int);

void main()
{
	char strs[][200] = { "dog","racecar","car"};
	//char strs[][200] = { "flower","flow","fight"};

	int strslen = sizeof(strs[0])/sizeof(strs[0][0]);

	char *solution = longestCommonPrefix(strs,strslen);
	printf("\"");

	printf("%s", solution);
	printf("/\"");

}

 char *longestCommonPrefix(char strs[][200], int strslen)
{
	static char result[200] = "\0";

	for(int i=0 ; i < strslen ; i++)
	{
		if(strs[0][i] == strs[1][i] || strs [2][i] == strs[1][i] || strs [0][i] == strs[2][i])
		{
			char temp[] = {strs[0][i], '\0'};
			strcat(result, temp);
			
		}
		else
		{
			break;
		}
	}
	return result;
}

