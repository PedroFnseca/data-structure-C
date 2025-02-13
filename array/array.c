
#include <stdio.h>
#include <stdlib.h>

void inputUser ();

void freeMatriz(int ***matriz, int x, int y, int z) {
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      free(matriz[i][j]);
    }
    free(matriz[i]);
  }
  free(matriz);
}

void mallocMatriz(int ****matriz, int x, int y, int z) {
  *matriz = (int ***) malloc(x * sizeof(int **));

  for (int i = 0; i < x; i++) {
    (*matriz)[i] = (int **) malloc(y * sizeof(int *));
    for (int j = 0; j < y; j++) {
      (*matriz)[i][j] = (int *) malloc(z * sizeof(int));
    }
  }
}

void printMatriz(int ***matriz, int x, int y, int z) {
  printf("\n");
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      for (int k = 0; k < z; k++) {
        printf("%d \t", matriz[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }
}

void fillMatriz(int ***matriz, int x, int y, int z) {
  int numUser;

  printf("\n");
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      for (int k = 0; k < z; k++) {
        printf("x: %d, y: %d, z: %d\t", i, j, k);
        scanf("%d", &numUser);
        matriz[i][j][k] = numUser;
      }
    }
  }
}

void fillSizeMatriz(int *x, int *y, int *z) {
  printf("Digite a dimensão X: ");
  scanf("%d", x);

  printf("Digite a dimensão Y: ");
  scanf("%d", y);
  
  printf("Digite a dimensão Z: ");
  scanf("%d", z);
}

int main() {
  int x, y, z;
  int ***matriz;

  fillSizeMatriz(&x, &y, &z);
  mallocMatriz(&matriz, x, y, z);
  fillMatriz(matriz, x, y, z);
  printMatriz(matriz, x, y, z);
  freeMatriz(matriz, x, y, z);

  return 0;
}
