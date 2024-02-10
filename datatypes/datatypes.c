/*
This file demonstrates the usage of different data types in C programming language.
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(){

    char a = "c"; // single character %c
    char b[] = "Rhys"; // array of strings %s
    float c = 3.141592; // (stores a decimal number) 4-bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %1f
    bool e = true; // 1 byte (True or False) %d
    char f = 100; // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255; // 1 byte (0 to +255) %d or %c
    short int h = 32767; // 2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d
    int j = 2147483647; // stores a integar %d
    unsigned int k = 4294967295L; // 4 bytes (0 to +4,294,967, 295) %U
    long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
 


    return 0;
}