#include <stdio.h>
#define n 5
int arr[n]={10,20,30,40,50},user;

void findeindex(){
  printf("Enter finde value:");
  scanf("%d",&user);

for (int i = 0; i <n; i++)
{
  if (user==arr[i])
  {
    printf("index is:%d",i);
    break;
  }else{
    if (i==n-1)
    {
      printf("value not found");
    }
    
  }
  
}


}

int main(){
findeindex();
}