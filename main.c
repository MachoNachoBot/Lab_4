#include <stdio.h>
#include <stdlib.h>

extern int sum_array(int *array, int count);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <data_file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", argv[1]);
        return 1;
    }

    int count;
    if (fscanf(file, "%d", &count) != 1) {
        printf("Error: Failed to read the number of data points.\n");
        fclose(file);
        return 1;
    }

    int *array = (int *)malloc(count * sizeof(int));
    if (array == NULL) {
        printf("Error: Memory allocation failed.\n");
        fclose(file);
        return 1;
    }

    for (int i = 0; i < count; i++) {
        if (fscanf(file, "%d", &array[i]) != 1) {
            printf("Error: Failed to read data point at index %d.\n", i);
            free(array);
            fclose(file);
            return 1;
        }
    }

    fclose(file);

    int total_sum = sum_array(array, count);

    printf("The sum of the integers is: %d\n", total_sum);

    free(array);

    return 0;
}
