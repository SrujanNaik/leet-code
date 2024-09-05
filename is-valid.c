#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define max 10000
bool isValid(char);
int top = -1;
char stack[]
stack = (char*) malloc(max * sizeof(char));

void push(char);


int main()
{
	char s[];

	s[] ="()";

	printf("%d", isValid(s);

}


bool isValid(char s[])
{
	int value;
	char temp[];


	for(int i=0 ;i < sizeof(s)/sizeof(s[0]);  i++)
	{
		if(s[i] == ")")
		{
			temp[] = "(";
			value = pop(temp);
			if(value == 0)
			{
				return 0;
			}
		}
		if(s[i] == "}")
		{
			temp[] = "(";
			value = pop(temp);
			if(value == 0)
			{
				return 0;
			}
		}
		if(s[i] == "]")
		{
			temp[] = "(";
			value = pop(temp);
			if(value == 0)
			{
				return 0;
			}
		}
			
		top = top + 1;
		stack[top] = s[i];
	}
	 return 1;
	 free(stack);
}


char pop(char a[])
{
	char temp;
	if(top == -1)
	{
		return 0;
	}
	else
	{
		while(1)
		{
			temp = stack[top];
			if(temp == a)
			{
				top =top -1;
				return 1;
			}
			top = top -1;
	if(top == -1)
	{
		return 0;
	}
	
		}
	}
}
			




