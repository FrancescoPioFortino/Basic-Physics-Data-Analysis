#include "data_analysis.h"

float calculate_mean(float data[10]){
  float mean = 0;
  float sum_data = 0;
  for (int i = 0; i < DATA_SIZE; i++){
    sum_data += data[i];
  }
  mean= sum_data / DATA_SIZE;
  return mean;
}

float find_maximum(float data[10]){
  float max = data[0];
  for (int i = 1; i < DATA_SIZE; i++){
    if (max < data[i]){
      max = data[i];
    }
  }
  return max;
}

float find_minimum(float data[10]){
  float min = data[0];
  for (int i = 1; i < DATA_SIZE; i++){
    if (min > data [i]){
      min = data [i];
    }
  }
  return min;
}


float square_root(float number){
  float rad_number = 0;
    if(number <= 0) return 0;

    rad_number = number /2.0;

    for (int j = 0; j < 20; j++){
      rad_number = (rad_number + number / rad_number) / 2.0;
    }
  return rad_number;
}
float standard_error(float data[10], float mean){
  float sum_of_squares = 0;
  for (int i = 0; i< DATA_SIZE; i++){
    float deviation= data[i]-mean;
    sum_of_squares += (deviation * deviation) ;
  }
  
  float variance = sum_of_squares / (DATA_SIZE * (DATA_SIZE - 1));

  return square_root(variance);
}

