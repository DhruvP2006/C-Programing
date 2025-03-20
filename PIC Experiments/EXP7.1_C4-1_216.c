#include <stdio.h>
#include <string.h>

#define MAX_EMP 1000

enum department
{
  SALES,
  TECHNICALS
};

union sales
{
  float commission;
  float salesTarget;
};

union technical
{
  char projectName[1000];
  float allowance;
};

struct employeeDetails
{
  int id;
  char name[1000];
  enum department dept;
  int age;
  float basicSalary;
  union
  {
    union sales s;
    union technical t;
  } data;
};

struct employeeDetails emp[MAX_EMP];
int empCount = 0;

void dataInput();

void displayData();

void searchById();

void update();

void delete();

int main()
{
  int flag = 1;
  while (flag)
  {
    int choice;
    printf("Enter 1 to Input Employee Data.\nEnter 2 to Display Employee Data.\nEnter 3 to Calculate a Employee`s Salary.\nEnter 4 to Search a Employee by ID.\nEnter 5 to Update a Employee Data.\nEnter 6 to Delete a Employee Data.\nEnter 7 to view all the option again.\nEnter 8 to exit.\nEnter your Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      dataInput();
      break;
    case 2:
      displayData();
      break;
    case 3:
      dataInput();
      break;
    case 4:
      searchById();
      break;
    case 5:
      update();
      break;
    case 6:
      delete ();
      break;
    case 7:
      flag = 1;
      break;
    case 8:
      flag = 0;
      break;
    default:
      printf("Please Enter a Valid Input.");
      break;
    }
  }
  return 0;
}

void dataInput()
{
  int flag;
  while (flag && empCount < MAX_EMP)
  {
    printf("Enter Employee ID: ");
    scanf("%d", &emp[empCount].id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", &emp[empCount].name);
    printf("Enter Employee Age: ");
    scanf(" %d", &emp[empCount].age);
    printf("Enter Employee`s Basic Salary: ");
    scanf(" %f", &emp[empCount].basicSalary);

    int dept;
    printf("Enter 0 for Sales Department and 1 for Technical Department: ");
    if (dept == 0)
    {
      emp[empCount].dept = SALES;
      printf("Enter Employee`s Commission: ");
      scanf("%f", &emp[empCount].data.s.commission);
      printf("Enter Employee`s Sales Target");
      scanf("%f", &emp[empCount].data.s.salesTarget);
    }
    else if (dept == 1)
    {
      printf("Enter Employee`s Project Name: ");
      scanf("%[^\n]", &emp[empCount].data.t.projectName);
      printf("Enter Employee`s Allowance");
      scanf("%f", &emp[empCount].data.t.allowance);
    }
    else
    {
      printf("Invalid Department!");
      continue;
    }

    empCount++;
    printf("Press 1 to input more Employees Data.\nEnter 0 to Exit.\n");
    scanf("%d", &flag);
  }
}

void displayData()
{
  if (empCount == 0)
  {
    printf("No Employee Data Available");
    return;
  }
  else
  {
    for (int i = 0; i < empCount; i++)
    {
      printf("Employee ID: %d\n", emp[i].id);
      printf("Employee Name: %s\n", emp[i].name);
      printf("Employee Age: %d\n", emp[i].age);
      printf("Employee Basic Salary: %f\n", emp[i].basicSalary);
      if (emp[i].dept == SALES)
      {
        pritnf("Department: Sales");
        printf("Employee Commision: %f\n", emp[i].data.s.commission);
        printf("Employee Basic Salary: %f\n", emp[i].basicSalary);
      }
      else
      {
        pritnf("Department: Technical");
        printf("Employee Prject Name: %s\n", emp[i].data.t.projectName);
        printf("Employee Allowance: %f\n", emp[i].data.t.allowance);
      }
    }
  }
}

void searchById()
{
  int id;
  printf("Enter Employee ID to be searched: ");
  scanf("%d", id);
  for (int i = 0; i <= 0; i++)
  {
  }
}

void update() {}

void delete() {}