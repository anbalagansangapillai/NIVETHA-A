#include<stdio.h>
#include<string.h>
int cmpstr(c s1[10], c s2[10]);

  int main() {
    c arr1[10] = "Nodalo";
    c arr2[10] = "nodalo";
    printf(" %d", cmpstr(arr1, arr2));
 
    return 0;
    }
   
    int cmpstr(c s1[10], cs2[10]) {
    
    int n = strlen(s1);
    int k = strlen(s2);
    int bigger;
    if (n < k) {
      bigger = k;
    }
    else if (n> k) {
      bigger = n;
    }
    else {
      bigger = n;
    }
    
    for (n = 0; n< bigger; n++) {
   
      if (s1[n] == s2[n]) {
      }

      else {
        return (s1[n] - s2[n]);
      }
    }
   
    return (0);
  }
