#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define n 5
int arr[n];
int a;
int sort(){
  srand(time(0));
  for (int  i = 0; i < n; i++)
  {
    arr[i] = (rand()%10)+1;
  }

  for (int i = 0; i < n; i++)
  {
    printf("%d ",arr[i]);
  }

  for (int i = 0; i < n-1; i++)
              {
    for (int j = 0; j < n-1-i; j++)
    {
      if (arr[j]>arr[j+1])
      {
      a = arr[j];
       arr[j] =arr[j+1];
       arr[j+1] = a;
      }
      
    }
    
  }
  printf("\n");

  for (int i = 0; i < n; i++)
  {
    printf("%d ",arr[i]);
  }
  
  
  

}


int main(){
sort();
}