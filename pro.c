#include<stdio.h>
void sum(int x,int y){
 printf("Addition of X and Y is %d\n",x+y);
}
void sub(int x,int y){
 printf("Subtraction of X and Y is %d\n",x-y);
}
void multiply(int x,int y){
 printf("Multiplication of X and Y is %d\n",x*y);
}
void division(int x,int y){
 printf("Division of X and Y is %d\n",x/y);
}
void modulo(int x,int y){
 printf("Modulo of X and Y is %d\n",x%y);
}

void main()
{
	int a,b,choice;
 
	printf("Enter choice for Your First Number: ");
	scanf("%d",&a);
 	printf("Enter choice for Your Second Number: ");
	scanf("%d",&b);
 
 do{
  printf("Press 1 for + \n");
  printf("Press 2 for - \n");
  printf("Press 3 for * \n");
  printf("Press 4 for / \n");
  printf("Press 5 for %% \n");
  printf("Press 6 for Exit\n");
  printf("Enter Your choice: ");
  scanf("%d",&choice);
 
  switch(choice)
  {
   case 1:
    sum(a,b);
    break;
    
   case 2:
    sub(a,b);
    break;
  
   case 3:
    multiply(a,b);
    break;
   
   case 4:
    division(a,b);
    break;
    
   case 5:
    modulo(a,b);
    break;
  
   case 6:
    printf("you have successfully exited.\n");
    break;
 
  default:
   printf("Your input is invalid. \n\n");
   break;
  }
  
}
	while(choice !=0);
}

