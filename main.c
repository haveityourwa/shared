#include <stdio.h>
#include <stdlib.h>

int* test1 = 1;
int* test2 = 2;

int main(){
    //printf("HelloWorld1 \n");
    test();
    printf("number before %i \n",test2);
    test_csub_(&test1,&test2);
    printf("number after %i \n",test2);
};

void test(){
    //printf("helloWorld \n");
};

void test_csub_(int* arg, int* res){
   *res = 6*(*arg);
  };
