#include <stdio.h>

int user;
int *pUser = &user;

int main(){
   printf("Choose whether to sort the array in ascending(1) or descending(2) order: \n");    // Ask the user to type a word

   scanf("%d", &user);
   *pUser = user;
   bubbleSort();
}
int ascending(int *pUser){
   if (*pUser == 1){
      printf("balls");
      return 0;
   }
}

int descending(int *pUser){
   if (*pUser != 1){
      printf("cool!");
      return 0;
   }
}
