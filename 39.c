#include <stdio.h>
  int main() {
    int b[10];
    int i;
    int greatest;
    printf("Enter ten values:");

    for (i = 0; i < 10; i++) {
    	scanf("%d", &b[i]);
    }

    greatest = b[0];
    for (i = 0; i < 10; i++) {
	if (b[i] > greatest) {
	greatest = b[i];
    }
    }
    printf("
    Greatest of ten numbers is %d", greatest);
    return 0;
  }
