#include <stdio.h> 
#include <string.h> 

// Create the structure
typedef struct TimeStamp {
    int year, month, date, hour, minute, second;
} timstp;

void display(timstp timestamp) {
    printf("The timestamp format for today is : %d-%d-%d-%d-%d-%d\n", timestamp.year, timestamp.month, timestamp.date, timestamp.hour, timestamp.minute, timestamp.second);
}

int main() {
    // TODO : Write a structure capable of storing timestamp
    timstp timestamp = {2022, 11, 7, 9, 45, 34};
    display(timestamp);
    
    return 0;
}