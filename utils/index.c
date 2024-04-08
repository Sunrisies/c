#include <stdio.h>
int da(){
  printf("Hello from da\n");
  return 0;
}


int file1() {
    FILE *file;
    char ch;

    file = fopen("C:\\Users\\hover\\Desktop\\test\\c\\main.c", "r");

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}