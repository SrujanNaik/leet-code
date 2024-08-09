#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x)
{
	int check=0,temp;
	temp = x;
	if(x<0||(x!=0&&x%10==0))
	{
		return false;
	}

	while(check<x)
	{
		check = check*10  +  x%10;
		
		x/=10;
	}
	

	return (check==x||x==check/10);

}



int main()
{
	int x,pld;
	x = 121; 
	pld = isPalindrome(x);
	if(pld!=true)
	{
		printf("It is not a Palindrome\n");
	}
	else
	{
		printf("It is a Palindrome\n");
	}
}
	

