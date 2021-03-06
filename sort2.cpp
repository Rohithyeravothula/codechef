#include<stdlib.h>
#include<stdio.h>
#include <iostream>
using namespace std;

void print_array(int array[], int size);

int merge(int array[], int start, int mid, int end) {
  int * left_array=(int *)calloc(sizeof(int), mid-start+1);
  int * right_array=(int *)calloc(sizeof(int), end-mid);
  int i, j, k;
  int inversions=0;
  for(i=0; i<mid-start+1; i++) {
    left_array[i]=array[start+i];
  }
  for(j=0; j<end-mid; j++) {
    right_array[j]=array[mid+1+j];
  }
  i=0;
  j=0;
  for(k=start; k<=end; k++) {
    if(i<mid-start+1 && j<end-mid && left_array[i]>right_array[j]) {
        inversions=inversions+mid-start-i+1;
    }
    if((i<mid-start+1 && j<end-mid && left_array[i]<=right_array[j]) || j>=end-mid) {
      array[k]=left_array[i];
      i++;
    } else if((i<mid-start+1 && j<end-mid && left_array[i]>right_array[j]) || i>=mid-start+1) {
      array[k]=right_array[j];
      j++;
    }
  }
  return inversions;
}

int merge_sort(int array[], int start, int end) {
  int mid;
  int inversions=0;
  if(start<end) {
    mid=(start+end)/2;
    inversions=inversions+merge_sort(array, start, mid);
    inversions=inversions+merge_sort(array, mid+1, end);
    inversions=inversions+merge(array, start, mid, end);
  }
  return inversions;
}


int main() {
int t;
scanf("%d",&t);
int a[t],i;
for(i=0;i<t;i++)
    scanf("%d",&a[i]);
  merge_sort(a,0,t-1);
  for(i=0;i<t;i++)
    printf("%d\n",a[i]);
  return 0;
}
