#include <stdio.h>
#include <stdlib.h>

int* test1 = 1;
int* test2 = 2;

int main(){
    printf("HelloWorld1");
    test();
    printf("%i",test2);
    test_csub_(&test1,&test2);
    printf("%i",test2);
};

void test(){
    printf("helloWorld");
};

void test_csub_(int* arg, int* res){
   *res = 6*(*arg);
  };
