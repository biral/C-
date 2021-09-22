#include<stdio.h>
#include<string.h>

char s[30][30];
char a[10];
char b[10];
char temp[10];
int ind = 0;
	
void print(int m,int n)
{
	if(m == 0 || n == 0)
		return;
	
	if(s[m][n] == '\\')
	{
		print(m-1,n-1);
		temp[ind] = a[m-1];
		ind++;
	}
	else if(s[m][n] == '|')
		print(m-1,n);
	else
		print(m,n-1);
}

void main()
{
	
	int i = 0,j = 0,m,n,c[30][30];
	
	printf("Enter Char of A -> ");
	scanf("%s",a);
	
	printf("Enter Char of B -> ");
	scanf("%s",b);
	
	printf("\n\nA -> <");

	while(a[i] != NULL)
	{
		printf(" %c",a[i]);
			if(a[i+1] != NULL)
				printf(",");
		i++;
	}
	
	printf(" > \nB -> <");
	
	while(b[j] != NULL)
	{
		printf(" %c",b[j]);
			if(b[j+1] != NULL)
				printf(",");
		j++;
	}
	printf(" >\n");
	
	m = strlen(a);
	n = strlen(b);
	
	for(i = 0 ; i < 30 ; i++)
	{
		for(j = 0 ; j < 30 ; j++)
		{
			c[i][j] = 0;
			s[i][j] = ' ';
		}	
	}
	
	printf("\n Length of A -> %d \n Length of B -> %d \n\n",m,n);
		
	for(i = 1 ; i <= m ; i++)
	{
		for(j = 1 ; j <= n ; j++)
		{	
			if(a[i-1] == b[j-1])
			{
				c[i][j] = c[i-1][j-1] + 1;
				s[i][j] = '\\';
			}
			else if(c[i-1][j] >= c[i][j-1])
			{
				c[i][j] = c[i-1][j];
				s[i][j] = '|';
			}
			else
			{
				c[i][j] = c[i][j-1];
				s[i][j] = '-';
			}
		}
	}

	printf("\n    | ");
	for(i = 0 ; i <= m+1 ; i++)
	{
			if(i == 0)
				printf("0  ");
			else
				printf("%c  ",b[i-1]);
	}
	
	printf("\n ");
	
	for(j = 0 ; j <= n+5 ; j++)
	{	
			if(j == 1) printf("+");
			else printf("---");
	}
		
	printf("\n  ");	
	for(i = 0 ; i <= m ; i++)
	{
		printf("  |");	
		for(j = 0 ; j <= n ; j++)
		{
		 	printf(" %c ",s[i][j]);
		}
		if(i == 0)
				printf("\n  0 |");
			else
				printf("\n  %c |",a[i-1]);
		
		for(j = 0 ; j <= n ; j++)
		{
		 	printf(" %d ",c[i][j]);
		}
		printf("\n  ");
	}
	
	
	print(m,n);
	
	printf("\n\nLongest Common Subsequence : < ");
	
	for(i = 0 ; i < strlen(temp) ; i++)
	{
		printf("%c",temp[i]);	
		if(i < strlen(temp) - 1)
			printf(", ");	
	}
	
	printf(" >\n\n");
	
}
