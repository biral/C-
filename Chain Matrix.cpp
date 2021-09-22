#include<stdio.h>
int s[100][100];
void display(int i,int j)
{
	if(i == j)
	printf("A%d",i);
	else
	{
		printf("(");
		display(i,s[i][j]);
		display(s[i][j]+1,j);
		printf(")");
	}
}
void main()
{
int n,i,j,k,l,q = 999;
int p[10];
int tab[10][10];
printf("Enter Total number of P : ");
scanf("%d",&n);
for(i = 0 ; i <= n ; i++)
{  printf("Enter P[%d] : ",i);
scanf("%d",&p[i]);
}	
for(i = 0 ; i <= n ; i++)
{   for(j = 0 ; j <= n ; j++)
tab[i][j] = 0;}
i = 1;
while(i != n)
{ s[i][i] = i;
i++;
}
for(l = 2 ; l < n ; l++)
{   for(i = 1 ; i <= n-l+1 ; i++){
			j = i + l - 1;
			tab[i][j] = 9999;
			for(k = i ; k <= j-1 ; k++)
			{
			q = tab[i][k] + tab[k+1][j] + (p[i-1] * p[k] * p[j]) ;
			if(q < tab[i][j]){
			tab[i][j] = q;
			s[i][j] = k;
			}  }
	}   }
for(i = 0 ; i < n ; i++)
{
printf("\n");
for(j = 0 ; j < n ; j++)
printf("  %d  ",tab[i][j]);
}
printf("\n\nKth Value : ");
for(i = 0 ; i < n ; i++)
{
printf("\n");
for(j = 0 ; j < n ; j++)
printf("  %d  ",s[i][j]);
}
printf("\n\nThe Optimal Order : ");
display(1,n);
}
