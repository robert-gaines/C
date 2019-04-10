#include <stdio.h>

struct employee
{
  int employeeNumber;
  char* firstName;
  char* lastName;
};

int main()
{
  int i = 0;
  struct employee emp;
  struct employee* ptrEmp;

  ptrEmp = &emp;

  ptrEmp->employeeNumber = 1;
  ptrEmp->firstName = "Joe";
  ptrEmp->lastName = "Sixpack";

  printf("Employee Number: %d \n Employee First Name-> %s \n Employee Last Name-> %s \n", ptrEmp->employeeNumber, ptrEmp->firstName, ptrEmp->lastName);

  return 0;
}
