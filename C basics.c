//Beginning the C Language 

// C is a high level computer language which is also called the mother of all programming languages.This language is one of the most popular languages among Software Engineers

//Basic programs in C 
/*
#include <stdio.h>
int main() {
  printf("Hello dev");
  return 0;
  
}


#include <stdio.h>
int main() {
  int a = 55;
  print("%d",a)
}

// Variables in C

#include <stdio.h>

int main() {
  int age;
  scanf("&d",age);
  
  return 0;
}



#include <stdio.h>
int main() {
  
  int x = 45;
  int y = 67;
  int sum = x+y;
  printf("The sum is %d and %d is: %d",x,y,sum);
  return 0;
}


  
  
//Data Types in C
//C language supports three types of datatypes
//Primary , Derived , User Defined

//Calculator program in C

#include <stdio.h>
int main() {
  int a;
  int b;
  
  printf("Enter the first value");
  scanf("%d",&a);
  printf("Enter the second value");
  scanf("%d",&b);
  int sum = a+b;
  int sub= a-b;
  int mul = a*b;
  int div = a/b;
  printf("The sum is %d and %d is %d is:\n ",a,b,sum);
  printf("The sub is %d and %d is %d is:\n ",a,b,sub);
  printf("The mul is %d and %d is %d is:\n",a,b,mul);
  printf("The div is %d and %d is %d is:",a,b,div);
  return 0;
}



  
//checking number is even or odd


#include <stdio.h>
int main() {
  int n;
  printf("Enter the number which you want to check");
  scanf("%d",&n);
  if (n % 2 == 0)
     printf("The number is even ");
  else
     printf("The number is odd");
  return 0;
  
}


  
  
  
//Voter eligibility criteria

#include <stdio.h>
int main() {
  int age;
  printf("Please enter the age of the voter");
  scanf("%d",&age);
  if (age > 21)
  printf("You are eligible to vote");
  else
  printf("Go and stydy mathematics ");
  return 0;
}



  
  
//Swapping two numbers

#include <stdio.h>
int main() {
  int n ,m ,temp;
  printf("Please enter the value");
  scanf("%d",&n);
  printf("Please enter the second value ");
  scanf("%d", &m);
  temp = n;
  n = m;
  m = temp;
  
  
  printf("After swapping n = %d m = %d",n,m);
  return 0;
  
  
}


  
// Funtions in C

int sum(int a,int b)
{
    return a + b;
  
  }
  
int main() {
  int add = sum(10,30);
  printf("The sum is:%d",add);
  return 0;
}
  

  
  
int add(int a, int b)
{
  return a+b;
}



int main() {
  int num1,num2,sum;
  printf("Enter the number");
  scanf("%d",&num1);
  printf("Enter the number ");
  scanf("%d",&num2);
  
  sum = add(num1,num2);
  printf("The sum of %d and %d is:%d",num1,num2,sum);
  
  
  

  
//Loops programs in C


#include <stdio.h>

void main()
{
for(int i =1; i<=10;i++)
{
  printf("\n The square of %d is %d",i,i*i);
}
  return 0;
}


  
  

#include <stdio.h>
void main()
{
  int i;
  printf("Even numbers between 1 to 25:\n");
  for(i = 1;i<=25;i++)
  {
    if (i%2==0)
  
  {
    printf("%d\n",i);
  }
  }
  return 0;
}

*/
  
//This code is contributed by Dev Kumar
  
  