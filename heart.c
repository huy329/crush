#include <stdio.h>

int main() {
  char name[999];
  int birth_year;
  
  printf("Crush's name: ");
  gets(name);
  fflush(stdin);
  
  printf("Crush's Birth Year: ");
  scanf("%d", &birth_year);
  
  printf("*****************************\n");
  printf("***     0 0 0   0 0 0     ***\n");
  printf("***   0 0 0 0 0 0 0 0 0   ***\n");
  printf("*** 0 0 0 0 0 0 0 0 0 0 0 ***\n");
  printf("*** 0 0 0 0 0 0 0 0 0 0 0 ***\n");
  printf("***   0 0 0 0 0 0 0 0 0   ***\n");
  printf("***     0 0 0 0 0 0 0     ***\n");
  printf("***       0 0 0 0 0       ***\n");
  printf("***         0 0 0         ***\n");
  printf("***           0           ***\n");
  printf("*****************************\n");
  
  return 0;
}
