#include <stdio.h>
#include "vector_utils.h"

int read_vector_float(float *vec, int size, float stop_value) {
    if (vec == NULL || size <= 0) {
        return -1;
    }
    int count = 0;
    int check;
    float number;
    for (int i = 0; i<size; ++i) {
        check = scanf("%f", &number);
        if (check == EOF) {
            return -2;
        }
        if (!check) {
            return -2;
        }
        else if (number-stop_value<0.001 && number-stop_value>-0.001){
            break;
        }
        *(vec + i) = number;
        count++;
    }
    return count;
}

void display_vector(const int *tab, int size){
    if(tab != NULL && size>0) {
        for (int i = 0; i < size; i++) {
            printf("%d ", *tab);
            tab++;
        }
    }
}