//Assignment 6 Sol 1//
/*
#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}
*/

//Sol 2//
/*
#include <stdio.h>

void main()
{
   int i,n,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe even numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i);
     sum+=2*i;
   }
   printf("\nThe Sum of even Natural Number upto %d terms : %d \n",n,sum);
   return 0;
}
*/

//Sol 3//
/*
#include <stdio.h>
void main()
{
   int i,n,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe odd numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i-1);
     sum+=2*i-1;
   }
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
   return 0;
}
*/

//Sol 4//
/*
#include<stdio.h>
int main()
{
  int n, sum=0;

  printf("Enter n value: ");
  scanf("%d", &n);

  for(int i=0; i<=n; i++)
  {
     sum += (i*i);
  }

  printf("Sum of squares of first %d natural numbers = %d",n,sum);


  return 0;
}
*/

//Sol 5//
/*
#include<stdio.h>
int main()
{
  int n, sum=0;

  printf("Enter n value: ");
  scanf("%d", &n);

  for(int i=0; i<=n; i++)
  {
     sum += (i*i*i);
  }

  printf("Sum of cubes of first %d natural numbers = %d",n,sum);


  return 0;
}
*/

//Sol 6//
/*
#include<stdio.h>
int main()
{
 int i,fact=1,number;
 printf("Enter a number: ");
  scanf("%d",&number);
    for(i=1;i<=number;i++){
      fact=fact*i;
  }
  printf("Factorial of %d is: %d",number,fact);
return 0;
}
*/

//Sol 7//
/*
#include <stdio.h>
int main()
{
   int n;  // variable declaration
   int count=0;   // variable declaration
   printf("Enter a number");
   scanf("%d",&n);
   while(n!=0)
   {
       n=n/10;
       count++;
   }

   printf("\nThe number of digits in an integer is : %d",count);
    return 0;
}
*/

//Sol 8//
/*
#include <stdio.h>

int main() {

  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      flag = 1;
      break;
    }
  }


  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);
    return 0;
}
*/

//Sol 9//
/*
#include <stdio.h>
int main() {
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
*/

//Sol 10//
#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}
