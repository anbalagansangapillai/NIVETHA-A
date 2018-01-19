#include <stdio.h>
int main() {
    int i = 65;
    int k = 120;
 
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("%d %d" , i, k);
}
