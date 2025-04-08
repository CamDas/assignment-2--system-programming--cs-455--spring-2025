#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 3
#define EXAMS 4
int i, j;
int result;
int choice;
float avg;
int studentGrades[STUDENTS][EXAMS] = {
   {77, 68, 86, 73},
   {96, 87, 89, 78},
   {70, 90, 86, 81}};

int main() {

	printf("\nEnter a choice:\n 0  Print the array of grades\n 1  Find the minimum grade\n 2  Find the maximum grade\n 3  Print the average on all tests for each student\n 4  End program\n");
	scanf("%d", &choice);

	if (choice == 0) {
		printArray();}
   else if (choice == 1) {
      minimum();}
   else if (choice == 2) {
      maximum();}
   else if (choice == 3) {
      average();}
   else if (choice == 4) {
      exit(0);}
	}

   int printArray(){
      for (int i = 0; i < 3; i++) {
         printf("\n");
         for (int j = 0; j < 4; j++) {
           printf("%d ", studentGrades[i][j]);; {
      }
   }
}
   return main();
   }

   int minimum(){
      result = studentGrades[0][0];
      for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++){
            if (result > studentGrades[i][j]){
                result = studentGrades[i][j];

            }
         }
      }
      printf("%d", result);
      return main();
   }

   int maximum(){
      result = studentGrades[0][0];
      for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++){
            if (result < studentGrades[i][j]){
                result = studentGrades[i][j];

            }
         }
      }
      printf("%d", result);
      return main();
   }

   int average(){
      for (i = 0; i < 3; i++)
    {    avg = 0;
        for (j = 0; j < 4; j++){
            avg = avg + studentGrades[i][j];

            }
         avg = avg / 4;
         printf("%f", avg);
         printf("\n");
         }


      return main();
   }

      void (*processGrades[4])(int [][EXAMS], size_t, size_t) =
      {printArray, minimum, maximum, average};

