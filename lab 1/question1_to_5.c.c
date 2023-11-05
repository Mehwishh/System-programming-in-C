#include <stdio.h>
int main()
{
  // 1. Write a C program that accepts an employee's ID, total worked hours in a month and the amount received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.

  int employeeId;
  printf("Enter employee ID: ");
  scanf("%d", &employeeId);

  int totalWorkedHours;
  printf("Enter total worked hours in a month: ");
  scanf("%d", &totalWorkedHours);

  int amountReceivedPerHour;
  printf("Enter amount received per hour: ");
  scanf("%d", &amountReceivedPerHour);

  float salary = amountReceivedPerHour * totalWorkedHours;
  printf("Salary: %.2f\n", salary);

  // 2. Write a C program that takes the height and width of a rectangle as an input from user and compute the perimeter and area of a rectangle.

  float height, width, perimeter, area;

  printf("Enter the height of the rectangle: ");
  scanf("%f", &height);

  printf("Enter the width of the rectangle: ");
  scanf("%f", &width);

  perimeter = 2 * (height + width);
  area = height * width;

  printf("The perimeter of the rectangle is: %f\n", perimeter);
  printf("The area of the rectangle is: %f\n", area);

  //  3. Write a C program to accept the height of a person in centimeters and categorize the person according to his height. (Height < 150cm – Dwarf, Height=150cm – Average,Height>=165cm – Tall).
  printf("Enter the height of the person in centimeters: ");
  float height;
  scanf("%f", &height);
  if (height > 0)
  {
    if (height < 150.0)
    {
      printf("The person is a dwarf.\n");
    }
    else if (height == 150.0)
    {
      printf("The person has average height.\n");
    }
    else if (height >= 165.0)
    {
      printf("The person is tall.\n");
    }
  }
  else
  {
    printf("Invalid height.\n");
  }
  // 4. Write a program in C to convert a decimal number to a binary number using functions.

  void decimalToBinary(int n)
  {
    if (n == 0)
    {
      return;
    }
    decimalToBinary(n / 2);
    printf("%d", n % 2);
  }
  int decimalNumber;

  printf("Enter a decimal number: ");
  scanf("%d", &decimalNumber);

  if (decimalNumber < 0)
  {
    printf("Please enter a non-negative decimal number.\n");
  }
  else
  {
    printf("Binary representation: ");
    if (decimalNumber == 0)
    {
      printf("0");
    }
    else
    {
      decimalToBinary(decimalNumber);
    }
    printf("\n");
  }

  // 5. Write a function to calculate the nth Fibonacci number and call it recursively to print the Fibonacci series.
  int fab(int a, int b, int n)
  {
    if (n == 0)
    {
      return 0;
    }
    else
    {
      int z = a + b;
      printf("%d ", z);
      return fab(b, z, n - 1);
    }
  }

  int a = 0, b = 1, num;

  printf("FIBONACCI SERIES PRINTER\nEnter nth term of the Fibonacci series: ");
  scanf("%d", &num);

  if (num >= 1)
  {
    printf("1 ");
    fab(a, b, num - 1);
  }

  printf("\n");
  return 0;
}
