#include <stdio.h>
#include "helpers/vector.h"

int main() {
  struct vector* vec = vector_create(sizeof(int));
  int x = 50;

  vector_push(vec, &x);
  x = 20;

  vector_push(vec, &x);

  // pop off the 20
  vector_pop(vec);

  // Peek into vector
  vector_set_peek_pointer(vec, 0);

  int* ptr = vector_peek(vec);  // returns value push to stack

  while(ptr) {
    printf("%i\n", *ptr);
    ptr = vector_peek(vec);
  }
  
  return 0;
}  
