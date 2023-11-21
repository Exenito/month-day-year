#include <stdio.h>

int main(void) {
  int month, day, year; // declare variables

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  
  scanf("%d%d%d", &month, &day, &year);

  // Print the month
  switch (month) {
      case 1:
      if (month == 1){
          printf("January");
          break;
      }
      case 2:
      if (month == 2){
          printf("February");
          break;
      }
      case 3:
      if (month == 3){
          printf("March");
          break;
      }
      case 4:
      if (month == 4){
          printf("April");
          break;
      }
      case 5:
      if (month == 5){
          printf("May");
          break;
      }
      case 6:
      if (month == 6){
          printf("June");
          break;
      }
      case 7:
      if (month == 7){
          printf("July");
          break;
      }
      case 8:
      if (month == 8){
          printf("August");
          break;
      }
      case 9:
      if (month == 9){
          printf("September");
          break;
      }
      case 10:
      if (month == 10){
          printf("October");
          break;
      }
      case 11:
      if (month == 11){
          printf("November");
          break;
      }
      case 12:
      if (month == 12){
          printf("December");
          break;
      }}

  // Print the day
switch (day) {
    case 1: case 21: case 31:
    printf(" %dst", day);
    break;
    case 2: case 22:
    printf(" %dnd", day);
    break;
    case 3: case 23:
    printf(" %drd", day);
    break;
    case 4 ... 20:
    printf(" %dth", day);
    break;
    case 24 ... 30:
    printf(" %dth", day);
    break;
}

// Print the year
printf(" %d\n", year);  
  
  return 0;
}