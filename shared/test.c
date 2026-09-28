#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main(){
   Vector v;
   v = vectorNew(3);
   vectorStatus(v);
   /*printf("Allocated: %d\n", v -> allocated);
   printf("Used: %d\n", v -> used);*/
   printf("1st: %d\n", v -> mem[0]);
   printf("2st: %d\n", v -> mem[1]);

   printf("\nAdding values\n");
   vectorPush(&v, 1);
   vectorPush(&v, 2);
   vectorPush(&v, 3);
   vectorPush(&v, 4);

   /*printf("Allocated: %d\n", v -> allocated);
   printf("Used: %d\n", v -> used);*/
   vectorStatus(v);
   printf("1st: %d\n", v -> mem[0]);
   printf("2st: %d\n", v -> mem[1]);
   printf("3rd: %d\n", v -> mem[2]);
   printf("4th: %d\n", v -> mem[3]);

   /*printf("\nResizing\n");
   vectorResize(&v, 3);
   printf("Allocated: %d\n", v -> allocated);
   printf("Used: %d\n", v -> used);
   printf("1st: %d\n", v -> mem[0]);
   printf("2st: %d\n", v -> mem[1]);
   printf("3rd: %d\n", v -> mem[2]);
   printf("4th: %d\n", v -> mem[3]);*/

   printf("\nPopping\n");
   vectorPop(v);
   vectorStatus(v);
   printf("1st: %d\n", v -> mem[0]);
   printf("2st: %d\n", v -> mem[1]);
   printf("3rd: %d\n", v -> mem[2]);
   printf("4th: %d\n", v -> mem[3]); //???

   printf("\nGet index 1: %d\n", vectorGet(v, 1));
   vectorSet(v,1,10);
   printf("Get index 1: %d\n", vectorGet(v, 1));
   printf("Vector length: %d\n", vectorLen(v));

   vectorDelete(v);
   return 0;
}
