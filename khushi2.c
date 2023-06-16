#include<stdio.h>
void main(){
	int n;
printf("Enter the size of Array: ");
scanf("%d",&n);
	
	int a[n];
	int b[n];
	int c[n];
	int i;
printf("Enter the elements of A: \n");
   for(i=0;i<n;i++){
    printf("Enter a[%d]: ",i);
   	scanf("%d",&a[i]);
   }
printf("Enter the elements of B: \n");
   for(i=0;i<n;i++){
   	printf("Enter b[%d]: ",i);
   	scanf("%d",&b[i]);
   }
  for(i=0;i<n;i++){
  	c[i]=a[i]+b[i];
  } 
printf("sum of A & B elements are below \n");
   for(i=0;i<n;i++){
   	printf("%d\n",c[i]);
   }
}
