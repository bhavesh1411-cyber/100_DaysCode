// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

int main()
{
  int a, b, sum, difference, product, quotient;
  printf("Enter the first number %d", a);
  scanf("%d", &a);
  printf("Enter the second number%d", b);
  scanf("%d", &b);
  sum = a + b;
  difference = a - b;
  product = a * b;
  quotient = a / b;
  printf("The sum is %d", sum);
  printf("The difference is %d", difference);
  printf("The product is %d", product);
  printf("The quotient is %d", quotient);
  return 0;
}