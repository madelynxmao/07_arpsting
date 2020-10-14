/*
Madelyn Mao
System Level Programming
K07 -- Arrays and Pointers and Strings, Oh My!
2020-10-14
*/

#include <stdio.h>

//Write a function that takes an array of int values as a parameter and returns the average of those values.
float average_from_array(int a[], int size){
    float sum = 0;
    int i;
    for(int i = 0; i < size; i++){
        sum += a[i];
    }
    float avg = sum/size;
    return(avg);
}

//Write a function that takes 2 arrays of equal size as paramters (you can chose the type). 
//The function should copy the values of the first array into the second.
void copy_array(int a[], int b[], int size){
    int i;
    for(int i = 0; i < size; i++){
        b[i] = a[i];
        printf("%d, ", b[i]);
    }
    printf("\n");

}

//Write a function that takes a string as a parameter and returns its length. 
//When calculating the length of a string, do not include the terminating NULL in the result. 
//(You should not use any extra parameters here)

int string_length(char a[]){
    int length = 0;

    int i;
    for(i = 0; i < 100; i++){
        if (a[i]){
            length++;
        }
        else{
            break;
        }
    }
    return length;
}

//sample test runs
int main(){

    printf("question 1: ");
    int sample1[] = {2,3,5,7,8,90};
    int sample2[] = {3,4,5,6,7,8};

    int n = sizeof(sample1)/sizeof(sample1[0]);
    printf("%f\n", average_from_array(sample1, n));

    printf("\nquestion 2: ");
    copy_array(sample1,sample2,n);

    printf("\nquestion 3: ");
    char a_string[] = "hello my name is madelyn";
    printf("%d\n", string_length(a_string));
}