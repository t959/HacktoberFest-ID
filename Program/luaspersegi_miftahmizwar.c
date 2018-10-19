#include <stdio.h>
int main(){
  int panjang, lebar;
  
  // input
  printf("Panjang: ");
  scanf(" %d", &panjang);
  printf("Lebar ");
  scanf(" %d", &lebar);
  
  // output
  printf("Luas persegi: %d\n", panjang*lebar);

  return 0;
}
