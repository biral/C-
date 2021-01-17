#include<stdio.h> 
#include<stdlib.h> 
void knapsack(int obj,int cap,int profit[],int weigth[]) 
{ 
float x[obj]; 
int i,maxcap = cap,totalpro = 0; 
for(i = 0 ; i < obj ; i++) 
x[i] = 0.0; 
for(i = 0 ; i < obj ; i++) 
{ 
if(weigth[i] > maxcap) 
break; 
else 
{ 
x[i] = 1.0; 
totalpro += profit[i]; 
maxcap -= weigth[i]; 
} 
} 
if(i < obj) 
x[i] = (float)maxcap/weigth[i]; 
totalpro += x[i]*profit[i]; 
for(i = 0 ; i < obj ; i++) 
printf("\n X[%d] = %f",i+1,x[i]); 
printf("\nTotal Profit = %d \n",totalpro); 
} 
void swap(int *a,int *b) 
{ 
int temp = *a; 
*a = *b; 
*b = temp; 
} 
void main() 
{ 
int obj,*profit,*weigth,i,cap,j; 
float *ratio,ft; 
printf("\nEnter the no. of objects:- "); 
scanf("%d", &obj); 
profit = (int *)malloc(obj*sizeof(int)); 
weigth = (int *)malloc(obj*sizeof(int)); 
ratio = (float *)malloc(obj*sizeof(float)); 
for(i = 0;i < obj;i++) 
{ 
printf("Enter Profit of Object %d : ",i+1); 
scanf("%d",&profit[i]); 
printf("Enter Weigth of Object %d : ",i+1); 
scanf("%d",&weigth[i]); 
} 
printf("\nEnter Maximum Capacity : "); 
scanf("%d",&cap); 
for(i = 0;i < obj;i++) 
ratio[i] = (float)profit[i]/weigth[i]; 
for(i = 0;i<obj;i++) 
{ 
for(j = i+1 ; j<obj ; j++) 
{ 
if(ratio[i] < ratio[j]) 
{ 
//swap(&ratio[i],&ratio[j]); 
ft = ratio[i]; 
ratio[i] = ratio[j]; 
ratio[j] = ft; 
swap(&profit[i],&profit[j]); 
swap(&weigth[i],&weigth[j]); 
}
} 
} 
for(i = 0; i < obj ; i++ ) 
printf("\nSorted Ratio : %f",ratio[i]); 
knapsack(obj,cap,profit,weigth); 
} 
