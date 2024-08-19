#include <stdio.h>

// Functions declarations using pointers
void get_number(int *input1, int *input2); 
void swap(int *variable1, int *variable2);
void show_result(int output1, int output2);

int main() 
{
    int first_num, second_num; 
    get_number(&first_num, &second_num); 
    swap(&first_num, &second_num); 
    show_result(first_num, second_num); 
    return 0; 
} 

void get_number(int *input1, int *input2) 
{ 
    printf("Enter two integers: \n"); 
    scanf("%i %i", input1, input2); 
} 

void swap(int *variable1, int *variable2) 
{
    int temp; 
    temp = *variable1; 
    *variable1 = *variable2; 
    *variable2 = temp; 
} 

void show_result(int output1, int output2) 
{
    printf("In reverse order the numbers are %i %i\n", output1, output2); 
} 
