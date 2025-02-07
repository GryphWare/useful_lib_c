#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void clear(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(){

    //dang ki ham thoat
    atexit(clear);

    //tao mang dong
    int *arr = (int*) malloc (5 * sizeof(int));
    if(!arr){
        perror("loi cap phat!\n");
        exit(EXIT_FAILURE);
    }

    puts("mang nay co size 5");

    //thay doi so size mang
    arr = (int*) realloc (arr, 10 * sizeof(int));
    if(!arr){
        perror("loi cap phat!\n");
        exit(EXIT_FAILURE);
    }

    puts("mang nay co size 10");
    
    //chuyen sang so
    char num_str[] = "12345";
    int num = atoi(num_str);
    double dnum = atof("123.484");
    long lnum = strtol("123", NULL, 10);
    printf("int: %d, double: %.3f, long: %ld\n", num, dnum, lnum);

    //random num
    srand(time(NULL));
    printf("%d\n", rand());

    //system ra chuong ga
    system("echo idk");

    //mang bay mau
    free(arr);

    //exit
    exit(EXIT_SUCCESS);
}
