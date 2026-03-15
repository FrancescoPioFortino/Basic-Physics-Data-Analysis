#include <stdio.h>
#include <stdlib.h>
#include "data_analysis.h"

int main (void){
  
  float data [10];


  for(int i = 0; i < DATA_SIZE; i++){
    printf("Enter the data number %d\n", i + 1 );
    scanf("%f", &data[i]);
    
  }
  printf("\n--- RESULTS OF ANALYSIS---\n");
  float mean = calculate_mean(data);
  printf("The mean is: %.2f\n", mean);
  printf("The maximum value is: %.2f\n", find_maximum(data));
  printf("The minimum value is: %.2f\n", find_minimum(data));
  printf("The standard error is: %.2f\n", standard_error(data,mean));
  return 0;
}
