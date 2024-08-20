/*
PROGRAM C
FOR STUDY
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "a");
    if(file == NULL) {
        printf("ERROR");
        return 0;
    }
    //fprintf(file, "พรุ่งสัปดาห์วันวิทยาศาสตร์\n");
    fprintf(file, "\nเราต้องได้แชมป์โครงงานวิทยาศาสตร์");
    fclose(file);

    file = fopen("test.txt", "r");
    if(file == NULL) {
        printf("ERROR");
        return 0;
    }
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file))
    {
        printf("%s", buffer);
    }

    printf("Suscces");
    return 1;
}
