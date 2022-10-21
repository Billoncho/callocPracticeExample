/*
Author:     Billy Gene Ridgeway
Date:       October 21st. 2022
Purpose:    Practice calloc() on a string created with malloc() and practice free().
*/

#include<stdio.h>
#include<stdlib.h>  // This is where malloc(), calloc() and realloc() functions are.
#include<string.h>      

int main()
{
    char *str = NULL;

    // Inital memory allocation.
    str = (char*)malloc(15 * sizeof(char));             // Initialize str by casting to char and allocaing 15 bytes of memory.
    strcpy(str, "CMSGT Bobbie");                        // Use string copy to add data to the string.
    printf("\nString = %s, Address = %u\n", str, str);

    // Reallocating memory with realloc().
    str = (char*)realloc(str, 25 * sizeof(char));           // Reallocate additional memory for str by using realloc().
                                                            // This will initialize the memory to zeros and copy the 
                                                            // original elements to the new string.
    strcat(str, " Gene Ridgeway");                          // Use string concatenate to add more elements to the string.
    printf("String = %s, Address = %u\n", str, str);

    free(str);      // Use free() to release the memory.

    return 0;
}