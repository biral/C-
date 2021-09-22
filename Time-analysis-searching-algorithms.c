#include<stdio.h> 
#include<math.h> 
#include<sys/time.h> 
#include<stdlib.h> 
#include<string.h> 
#define compGint(a,b) (a > b) 
#define compLint(a,b) (a < b) 
int rand(void); 
void linear_search(int arr[],int n,int ele) 
{ 
int i,temp = 0; 
for(i = 0 ; i < n ; i++) 
{ 
if(arr[i] == ele) 
{ 
printf(" \n Element is found...!!! \n"); 
temp = 1; 
break; 
} 
} 
if(temp == 0) 
{ 
printf(" \n Element is not found...!!! \n"); 
} 
} 
void binary_search(int arr[],int n,int ele) 
{ 
int min = 0 , max = n-1 , key = ele , mid = 0,temp = 0,count = 0; 
while( min < max ) { 
mid = (min + max)/2; 
if(arr[mid] == key) 
{ 
printf("\n Element Found...!!! \n"); 
temp = 1; 
break; 
} 
else if (key < arr[mid]) 
max = mid-1; 
else 
min = mid+1; 
} if(temp == 0) 
{ 
printf(" \n Element is not found...!!! \n"); 
} 
} 
int write_file(char file_name[],int array[],int n) 
{ 
FILE *fp; 
int i; 
fp=fopen(file_name,"w"); 
if(fp==NULL) 
{ 
printf("Error in writing a data"); 
fclose(fp); 
} 
else 
{ for(i=0;i<n;i++) 
{ 
fprintf(fp,"%d\n",array[i]); 
} 
} 
fclose(fp); 
return 0; 
}
main(){ 
long timedif; 
struct timeval tpstart; 
struct timeval tpend; 
struct timeval now; 
int rc; 
int m,n,i,j,s; 
int seed,nloops,*a,*t;
up: 
// now.tv_sec=000000000; 
// now.tv_usec=000000; 
// rc=settimeofday(&now, NULL); 
printf("Enter Ur Total Number = "); 
scanf("%d",&n); 
printf("Enter Your Searching Element : "); 
scanf("%d",&s); 
a=(int *)malloc(n*sizeof(int)); 
t=(int *)malloc(n*sizeof(int)); 
seed=6000; 
nloops = n; 
srand(seed); 
for (j = 0; j < nloops; j++) { 
// a[j] = (int) rand()%n; 
a[j]=j; rc=settimeofday(&now, NULL); 
printf("Enter Your Choice"); 
printf("\n 1-Linear Search \n 2-Binary Search \n 3-Try for Differant No \n 4- EXIT\n"); 
scanf("%d",&m); 
for(j=0;j< nloops; j++) 
a[j]=t[j]; 
if(rc==0) 
else 
{ 
//printf("\nsettimeofday() Succesful\n"); 
printf("\nTime Set sec=%ld Msec=%ld\n",now.tv_sec,now.tv_usec); 
} 
gettimeofday(&tpstart, NULL); 
printf("\nBefore Function call sec=%ld Msec=%ld\n",tpstart.tv_sec,tpstart.tv_usec); 
/* code here (write function call) */ 
switch(m) 
{ 
case 1: 
	linear_search(a,n,s); 
	break; 
case 2: 
	binary_search(a,n,s); 
	break; 
case 3: 
	goto up; 
	break; 
case 4: 
	goto exit;

default: 
	printf("\nEnter Proper Choice\n"); 
	goto up2; 
	break; 
} 
gettimeofday(&tpend, NULL); 
printf("After Function call sec=%ld Msec=%ld\n",tpend.tv_sec,tpend.tv_usec); 
timedif = 1000000 * (tpend.tv_sec - tpstart.tv_sec) + tpend.tv_usec - tpstart.tv_usec; 
printf("\nTime difference is:%ld\n",timedif); 
write_file("sorted.txt",a,n); 
/* for (j = 0; j < nloops; j++) { 
// a[j] = rand(); 
printf("%d\n", a[j]); 
}*/ 
goto up2; 
exit: 
return 0; 
}
