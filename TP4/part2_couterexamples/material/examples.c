#include <stdio.h>
#include <stdlib.h>

void init(int * tab);
void swap(float *f1, float *f2);
int * alloc (int val);

int main(int argc, char *argv[]) {
  int * ptr = alloc(7);
  for(int i=0; i<20; i++){
    printf("%d\n", ptr[i]);
  }

  float f1=0.7;
  float f2=1.2;
  swap(&f1,&f2);
  printf("f1: %f\nf2: %f",f1,f2);
  
  return 0;
}

int * alloc (int val){
   int *tab;
   tab = (int *) malloc(20*(sizeof(int)));

   for(int i =0; i<20; i++){
     tab[i]=val;
   }

   return tab;
}



void swap(float *f1, float *f2)
{
  float temp = *f1;
  *f1=*f2;
  *f2=temp;

}
