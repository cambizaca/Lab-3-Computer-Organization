#include <stdio.h>
 
int main()
{
  int A[3][3];    // matrix A
  int B[3][3];    // matrix B
  int C[3][3];    // matrix to store their sum

  printf("Please enter 9 values for matrix A:\n");
  for(int i = 0; i < 3; i++) {
    scanf("%d %d %d", &A[0][i], &A[1][i], &A[2][i]);
  }
  printf("Please enter 9 values for matrix B:\n");
  for(int i = 0; i < 3; i++) {
    scanf("%d %d %d", &B[0][i], &B[1][i], &B[2][i]);
  }

  printf("C = B + A =\n");

  for(int i = 0; i < 3; i++) {
    printf("%10i%10i%10i\n", 
     A[0][i] + B[0][i], 
     A[1][i] + B[1][i], 
     A[2][i] + B[2][i]);
  }
	
        
}
