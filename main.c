#include"func1.h"
#include"func2.h"
#include<stdio.h>
void preprocess()
{
  printf("do some preprocess! \n");
}

int main(void)
{
  preprocess();
  func1();
  func2();
  return 0;
}
