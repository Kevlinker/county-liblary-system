/*----------------------*
project:  Grading system*
Author:   Kevin linker  *
Date:     09, July 2021 *
Compiler: C99           *
License: MIT            *
-----------------------*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
  int marks;
  char grade;
  printf("\tzetech Grading System!\n");
  do {
  printf("Enter Mark: ");
  scanf("%d",&marks;
  if (marks<0 || marks>100)  {
        printf("invalid mark.try again\n")
  }
  } while (marks<0 || marks>100);

  //grading system
  //70 - 100 - A
  //60 - 69  - B
  //50 - 59  - C
  //40 - 49  - D
  //0  - 39  - F
  if (marks >= 70 ) {
        grade = 'A';
  }
  else if (marks >= 60 ) {
        grade = 'B';
  }
  else if (marks >= 50 ) {
        grade = 'C';
  }
  else if (marks >= 40 )  {
        grade = 'D';
  }
  else {
        grade = 'F';
  }

  switch(grade)
    case 'A':

  printf("Grade: %c/n",grade);
  return 0;
}
