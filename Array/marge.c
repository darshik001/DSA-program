#include<stdio.h>

int main(){
int arr1[] = {1,2,3,4,5,6};
int arr2[20];
int arr3[20]; 
int n;
int m;

printf("Enter value to print arr1:");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
  printf("Enter value of arr1 index:%d:",i);
  scanf("%d",&arr1[i]);
}

printf("\nEnter value to print arr1:");
scanf("%d",&m);
for (int i = 0; i < m; i++)
{
  printf("Enter value of arr1 index:%d:",i);
  scanf("%d",&arr2[i]);
}

int a = 0;

for (int  i = 0; i < n; i++,a++)
{
     arr3[a] = arr1[i];
}
for (int  i = 0; i < n; i++,a++)
{
     arr3[a] = arr2[i];
}

for (int i = 0; i < a; i++)
{
  printf("%d ",arr3[i]);
}

int lenght =sizeof(arr3)/ sizeof(arr3[0]);

printf("\n%d",lenght);

}





