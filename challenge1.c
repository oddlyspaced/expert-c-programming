// Code a program to place the highest value into a variable of type time_t,
// then pass it to ctime() to convert it into an ASCII string. Print the string.

#include<stdio.h>
#include<time.h>

int main() {
    time_t largest = 0x7FFFFFFF;
    // We don't use ctime because it converts the arguments to local time, which
    // will vary location to location.
    // printf("largest = %s \n", ctime(&largest));
    // Instead we use gmtime() to obtain UTC time value and then use asctime() to
    // convert it to string
    printf("largest = %s\n", asctime(gmtime(&largest)));
    // Even this has a bit of trickery
    // refer to xxv of introduction to learn mode
    return 0;
}