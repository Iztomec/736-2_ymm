#include<stdio.h> 
int main() 
	{ 

	int c=0, k = 0, s=0, n, ch=0; 
	char m; 
	scanf("%d",&n); 
	while(s<=n*2) 
		{
		s++; 
		scanf("%c",&m); 
		if((s==2)&&(m=='(')) 
		{ 
	ch++; 
	}	 
	if(m=='(') 
	{k++;} 
	if(m==')') 
	{c++;} 
	} 
	if(c==k&&ch==1) 
	printf("1\n"); 
	else 
	printf("0\n"); 
	return(0); 
	}	
