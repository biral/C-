#include<stdio.h> 
#include<math.h> 
#include<sys/time.h> 
#include<stdlib.h> 
#include<string.h> 
#define compG(a,b) (a > b) 
#define comp(a,b) (a < b) 
#define MAX 500000 
int rand(void); 
Selection Sort

int selection_sort(int array[],int n) 
{ 
int i,j; 
for(i=0;i<n;i++) 
{ 
for(j=i+1;j<n;j++) 
{ 
if(array[i]>array[j]) 
{ 
int temp=array[i]; 
array[i]=array[j]; 
array[j]=temp; 
} } } 
return 0; 
} 
Bubble Sort
void bubble_sort(int array[], int n) 
{  int x,y; 
for (x = 1; x < n; x++) 
{ 
for (y = 0; y < n - 1; y++) 
{  
int temp = array[y]; 
array[y] = array[y + 1]; 
array[y + 1] = temp; 
} } } 
Insertion Sort

void insertion_sort(int array[],int n) 
{ 
int x,y; 
for (x = 1 ; x <= n - 1; x++) 
{ 
y = x; 
while ( y > 0 && array[y] < array[y-1]) 
{ 
int temp= array[y]; 
array[y] = array[y-1]; 
array[y-1] = temp; 
y--; 
}      }    } 
Merge Sort

void mergeSort(int arr[], int low, int mid, int high) 
{ 
int i,m,k,l,temp[MAX]; 
l=low; 
i=low; 
m=mid+1; 
while((l<=mid)&&(m<=high)) 
{ 
if(arr[l]<=arr[m]) 
{ 
temp[i]=arr[l]; 
l++; 
} 
else 
{ 
temp[i]=arr[m]; 
m++; 
} 
i++; 
} if(l>mid) 
{ 
for(k=m;k<=high;k++) 
{ 
temp[i]=arr[k]; 
i++; 
}    } 
else 
{ 
for(k=l;k<=mid;k++){ 
temp[i]=arr[k] 
i++:    } 
} 
for(k=low;k<=high;k++) 
{ 
arr[k]=temp[k]; 
} 
} void pos_merge(int arr[], int low, int high) 
{ 
int mid;
 if(low<high) 
{ 
mid=(low+high)/2; 
pos_merge(arr,low,mid); 
pos_merge(arr,mid+1,high); 
mergeSort(arr,low,mid,high); 
} 
QUICK SORT
void quick_sort(int arr[],int low,int high) 
{ 
int pivot,j,temp,i; 
if(low<high) 
{ 
pivot = low; 
i = low; 
j = high; 
while(i<j) 
{ 
while((arr[i]<=arr[pivot])&&(i<high)) 
{     i++; 
} 
while(arr[j]>arr[pivot]) 
{ 
j--; 
} 
if(i<j) 
{ 
temp=arr[i]; 
arr[i]=arr[j]; 
arr[j]=temp; 
} 
} 
temp=arr[pivot]; 
arr[pivot]=arr[j]; 
arr[j]=temp; 
quick_sort(arr,low,j-1); 
quick_sort(arr,j+1,high); 
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
main() 
{ 
long timedif; 
struct timeval tpstart; 
struct timeval tpend; 
struct timeval now; 
int rc; 
int m,n,i,j; 
int seed,nloops,*a,*t; 
up: 
// now.tv_sec=000000000; 
// now.tv_usec=000000; 
// rc=settimeofday(&now, NULL); 
printf("Enter Ur Total Number = "); 
scanf("%d",&n); 
a=(int *)malloc(n*sizeof(int)); 
t=(int *)malloc(n*sizeof(int)); 
seed=6000; 
nloops = n; 
srand(seed); 
for (j = 0; j < nloops; j++) { 
// a[j] = (int) rand()%n; 
a[j]=j; 
t[j] = a[j]; 
// printf("unsorted=%d\n", a[j]); 
}
write_file("unsort.txt",a,n); 
up2: 
now.tv_sec=000000000; 
now.tv_usec=000000; 
rc=settimeofday(&now, NULL); 
printf("Enter Your Choice"); 
printf("\n1-Selection Sort\n 2-Bubble Sort \n 3-insertion Sort \n 4-Merge Sort\n 5-Quick Sort \n 6-Try for Differant No\n 7- EXIT\n"); 
scanf("%d",&m); 
for(j=0;j< nloops; j++) 
a[j]=t[j]; 
if(rc==0) 
printf("settimeofday() failed.\n"); 
else 
{ 
//printf("\nsettimeofday() Succesful\n"); 
printf("\nTime Set sec=%ld Msec=%ld\n",now.tv_sec,now.tv_usec); 
} gettimeofday(&tpstart, NULL); 
printf("\nBefore Function call sec=%ld Msec=%ld\n",tpstart.tv_sec,tpstart.tv_usec); 
/* code here (write function call) */ 
switch(m) 
{
case 1: 
selection_sort(a,n); 
break; 
case 2: 
bubble_sort(a,n); 
break; 
case 3: 
insertion_sort(a,n);
//insertion_sort(a,0,n); 
break; 
case 4: 
pos_merge(a,0,n-1); 
//MergeSort(a,n); 
break; 
case 5: 
quick_sort(a,0,n); 
break; 
case 6: 
goto up; 
break; 
case 7: 
goto exit; 
break; 
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
