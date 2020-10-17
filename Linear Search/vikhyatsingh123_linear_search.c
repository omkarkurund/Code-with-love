// Linear Search in C

#include <stdio.h>

int search(int a[], int n, int x) {
  
  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (a[i] == x)
      return i;
  return -1;
}

int main() {
  int a[] = {2, 4, 0, 1, 9};
  int x = 1;
  int n = sizeof(a) / sizeof(a[0]);

  int result = search(a, n, x);

  (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}
