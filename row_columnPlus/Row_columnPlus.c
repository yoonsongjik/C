#include <stdio.h>

int main() {
  int arr2[3][5] = {0};
  for (int i = 0; i < 3; i++)
    for (int ii = 0; ii < 5; ii++)
      scanf("%d", &arr2[i][ii]);

  for (int i = 0; i < 3; i++) {
    int sum = 0;
    for (int ii = 0; ii < 5; ii++) {
      sum += arr2[i][ii];
    }
    printf("%d���� �հ� : %d\n", i, sum);
  }
  for (int i = 0; i < 5; i++) {
    int sum = 0;
    for (int ii = 0; ii < 3; ii++) {
      sum += arr2[ii][i];
    }
    printf("%d���� �հ� : %d\n", i, sum);
  }

  return 0;
}