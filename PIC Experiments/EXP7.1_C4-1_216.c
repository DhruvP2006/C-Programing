#include<stdio.h>

struct employeeDetails {
  int id;
  char name[1000];
  enum department{
    SALES,
    TECHNICALS
  };
  int age;
  float basicSalary;
};


union sales{
  float commission;
  float salesTarget;
};

union technical{
  char projectName[1000];
  float allowance;
};

void dataInput();

void displayData();

void searchById(id);

void update();

void delete(id);

int main(){
  int choice;
  Printf("Enter 1 to Input Employee Data.\nEnter 2 to Display Employee Data.\nEnter 3 to Calculate a Employee`s Salary.\nEnter 4 to Search a Employee by ID.\nEnter 5 to Update a Employee Data.\nEnter 6 to Delete a Employee Data.\n");
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    break;
  
  default:
    break;
  }
  return 0;
}

void dataInput(){
  int n;
  for(int i = 1; i==0; i++){
    struct employeeDetails emp[n];
    printf("Enter Employee ID: ");
    scanf("%d", &emp[i].id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", &emp[i].name);
    printf("Enter Employee Age: ");
    scanf(" %d", &emp[i].age);
    printf("Enter Employee`s Basic Salary: ");
    scanf(" %d", &emp[i].basicSalary);
    printf("Press 1 to input more Employee Data.\nEnter 0 to Exit.\n");
    scanf("%d", &i);
  }

}

void displayData(){}

void searchById(id){}

void update(){}

void delete(id){}