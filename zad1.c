#include <stdio.h>
int main(){
  int i = 0;
  int  height = 0;
  scanf("%d", &height);
  for (i = 0; i < height; i++){
    for (int j = 1; j < height - i; j++){
      printf(" ");
    }
    if (i == 0) {
      printf("X\n");
    } else if (i + 1 == height) {
      for (int k = 0; k < 2*height -1; k++){
	printf("X");
      };
    } else {
      printf("X");
      for (int l = 0; l < 2*i -1; l++){
	printf(" ");
      }
      printf("X\n");
    }
  }
  printf("\n");
  
}
