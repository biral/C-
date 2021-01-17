#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
int i,j,n,w[20],v[20],d[20][20],c; 
clrscr(); 
printf("Enter the number of items you need : "); 
scanf("%d",&n); 
printf("Enter the capacity"); 
scanf("%d",&c); 
for(i=1;i<=n;i++) 
{ 
printf("Enter the weight : "); 
scanf("%d",&w[i]); 
printf("Enter the value : "); 
scanf("%d",&v[i]); 
} 
for(i=0;i<=n;i++) { 
d[i][0]=0; 
} 
for(i=1;i<=c;i++) 
{ 
d[0][j]=0; 
} 
for(i=1;i<=n;i++) 
{ 
for(j=1;j<=c;j++) 
{ 
if((j-w[i])<0) 
{ 
d[i][j]=d[i-1][j]; 
} 
else 
{ 
if(d[i-1][j]>v[i]+(d[i-1][j-w[i]])) 
d[i][j]=d[i-1][j]; 
else 
d[i][j]=v[i]+(d[i-1][j-w[i]]); 
} 
} 
}printf("Highest Value Computation for %d items : \n",n); 
for(i=0;i<=n;i++) 
{ 
for(j=0;j<=c;j++) 
{ 
printf("%d\t",d[i][j]); 
} 
printf("\n"); 
} 
getch(); 
} 
