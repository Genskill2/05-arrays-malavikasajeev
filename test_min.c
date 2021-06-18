#include <stdio.h>
#include <assert.h>


int min(int arr[], int n)
  {
    int i;
    int min= arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
 
    return min;
}

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }
