#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int count = 0;

struct Student
{
  int id;
  char name[30];
  int age;
  float gpa;
};

void dyna_mem(struct Student **, int);

void add_stu(struct Student **stud)
{
  struct Student new_stud;
  int role_choice;
  printf("ID: ");
  scanf("%d", &new_stud.id);
  getchar();

  printf("Name: ");
  gets(new_stud.name);

  printf("Age: ");
  scanf("%d", &new_stud.age);
  getchar();

  printf("GPA: ");
  scanf("%f", &new_stud.gpa);
  getchar();

  printf("ID: %d | Name: %s | Age: %d | GPA: %f\n", new_stud.id, new_stud.name, new_stud.age, new_stud.gpa);

  dyna_mem(stud, (count + 1));
  (*stud)[count++] = new_stud;
  printf("Student added!\n");
}

void display_studs(struct Student *studs)
{
  for (int i = 0; i < count; i++)
  {
    printf("ID: %d | Name: %s | Age: %d | GPA: %f\n", studs[i].id, studs[i].name, studs[i].age, studs[i].gpa);
  }
}

void display_stu(struct Student *stud)
{
  int enter_id;
  printf("Enter ID: ");
  scanf("%d", &enter_id);
  getchar();
  for (int i = 0; i < count; i++)
  {
    if (enter_id == stud[i].id)
    {
      printf("ID: %d | Name: %s | Age: %d | GPA: %f\n", stud[i].id, stud[i].name, stud[i].age, stud[i].gpa);
    }
  }
}

void dyna_mem(struct Student **students, int size)
{
  struct Student *temp = realloc(*students, size * sizeof(**students));
  if (temp == NULL)
  {
    printf("allocation failed");
    return;
  }
  *students = temp;
}

void delete_rec(struct Student **stud)
{
  if (count == 0)
  {
    printf("nothing to delete");
    return;
  }
  int id, index = -1;
  printf("enter id to delete: ");
  scanf("%d", &id);
  getchar();
  for (int i = 0; i < count; i++)
  {
    if (id == (*stud)[i].id)
    {
      index = i;
      printf("\nindex:%d\n", index);
    }
  }

  if (index == -1)
  {
    printf("Student not found");
    return;
  }
  (count)--;
  for (int i = index; i < count; i++)
  {
    (*stud)[i] = (*stud)[i + 1];
  }
  dyna_mem(stud, count);
  printf("Successfully deleted");
}

void update_rec(struct Student *stud)
{
  if (count == 0)
  {
    printf("nothing to update");
    return;
  }
  int id, index = -1;
  printf("enter id to update: ");
  scanf("%d", &id);
  getchar();
  for (int i = 0; i < count; i++)
  {
    if (id == stud[i].id)
    {
      index = i;
    }
  }
  if (index == -1)
  {
    printf("Student not found");
    return;
  }

  struct Student new_stud;
  int role_choice;
  printf("ID: ");
  scanf("%d", &new_stud.id);
  getchar();

  printf("Name: ");
  gets(new_stud.name);

  printf("Age: ");
  scanf("%d", &new_stud.age);
  getchar();

  printf("GPA: ");
  scanf("%f", &new_stud.gpa);
  getchar();

  printf("ID: %d | Name: %s | Age: %d | GPA: %f\n", new_stud.id, new_stud.name, new_stud.age, new_stud.gpa);

  stud[index] = new_stud;
  printf("Student updated!\n");
}

int main()
{
  struct Student *students = NULL;
  int choice;
  bool exit = false;
  while (exit == false)
  {
    printf("----\n");
    printf("Student Manager\n");
    printf("1. Add Student\n");
    printf("2. Display All Student\n");
    printf("3. Search Student by ID\n");
    printf("4. Update Record\n");
    printf("5. Delete Record\n");
    printf("6. Exit\n");
    printf("Select a item: ");
    scanf("%d", &choice);
    getchar();
    printf("----\n");

    switch (choice)
    {
    case 1:
      add_stu(&students);
      break;
    case 2:
      display_studs(students);
      break;
    case 3:
      display_stu(students);
      break;
    case 4:
      update_rec(students);
      break;
    case 5:
      delete_rec(&students);
      break;
    case 6:
      free(students);
      students = NULL;
      printf("program exited succesfully");
      exit = true;
      break;
    default:
      printf("%d", choice);
      printf("enter correct option!");
    }
  }
}