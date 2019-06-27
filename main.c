#include <stdio.h>
#include <stdlib.h>

int *ptr1, test1 = 1;
int *ptr2, test2 = 2;

int main()
{
    printf("HelloWorld1");
    test();
    printf("%i",test2);
    test_csub_(*ptr1,*ptr2);
    printf("%i",test2);
};

void test(){
    printf("helloWorld");
};

void test_csub_(int* arg, int* res)
  {

   *res = 6*(*arg);

  };
