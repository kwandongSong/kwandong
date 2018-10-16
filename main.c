#include <stdio.h>
#include"func1.h"
#include"func2.h"
void preprocess()
{
  printf("do some preprocess! \n");
}

void postprocess()
{
  printf("do some postprocess! \n");
}


void turbo_on()
{
  printf("turbo on! \n");

}

void turbo_off()
{
  printf("turbo off! \n");

}



int main(void)
{
  preprocess();
  turbo_on();

  func1();
  func2();

  turno_off();
  postprocess();
  return 0;
}
