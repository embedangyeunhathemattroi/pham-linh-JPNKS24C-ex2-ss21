#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE* file = fopen("bt01.txt", "r");
    char first_char = fgetc(file);
    if (first_char ) {
    	printf("moi ban nhap vao gtri de luu vao o bt01.txt \n", first_char);
    	printf("Ky tu dau tien trong file la : %c \n", first_char);
        scanf("%d", &first_char);
        printf("Gia tri  vua nhap da dc luu vao o bt01.txt \n", first_char);
        
    } else {
        printf("File rong.\n");
    }
    fclose(file);
    return 0;
}

