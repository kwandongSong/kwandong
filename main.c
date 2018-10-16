#include"func1.h"
#include"func2.h"
#include<stdio.h>
void preprocess()
{
  printf("do some preprocess! \n");
}

void postprocess()
{
  printf("do some postprocess! \n");
}


int main(void)
{
  preprocess();
  postprocess();
  func1();
  func2();
  return 0;
}
