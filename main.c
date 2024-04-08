#include <stdio.h>
#include "utils/index.h"
#include "utils/add.h"
#include "utils/file_util.h"  
int main()
{
    int result = add(1, 23);
    printf("Result: %d\n", result);
    file1();
    da();
    printf("Hello, World!\n");
    int result1 = file();  
    if (result1 != 0) {  
        printf("An error occurred while reading the file.\n");  
    }
    return 0;
}
