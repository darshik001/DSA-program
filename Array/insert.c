#include<stdio.h>

int main(){
   int arr[50];
  
  int size,index,value;

printf("Enter Size of array:");
scanf("%d",& size);

for (int i = 0; i < size; i++)
{
  printf("Enter value of index:%d:",i);
  scanf("%d",&arr[i]);
}

for (int i = 0; i < size; i++)
{
  printf("%d ",arr[i]);
}

printf("\nEnter index to change:");
scanf("%d",&index);
printf("Enter element value:");
scanf("%d",&value);

if (index>=0 && index <size)
{

for (int i = size-1; i >=index; i--){
      arr[i+1] = arr[i];
}
size++;
arr[index] = value;

for (int i = 0; i < size; i++){
  printf("%d ",arr[i]);
} 
}else{
  printf("plase enter valid input");
}


}