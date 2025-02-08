#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct Node{
    int a;
    long long int d;
}Node;

int main(){

    size_t size = 5;

    int *arr = (int*) malloc (size * sizeof(int));
    if(arr == NULL){
        perror("what");
        exit(EXIT_FAILURE);
    }

    //xac dinh khoang cach 2 con tro
    int *ptr = &arr[4];
    int *p = &arr[0];

    ptrdiff_t diff = ptr - p;

    printf("%td\n", diff);

    //xac dinh khoang cach 2 phan tu thanh vien
    printf("int a: %zu\n", offsetof(Node, a));
    printf("long long int: %zu\n", offsetof(Node, d));
    
    exit(EXIT_SUCCESS);
}
