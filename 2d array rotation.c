#include <stdio.h>

int main() {
    int n;
    int a[100][100], rotated[100][100];
    int i, j;
    int min, min_i, min_j, temp;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    // Input
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Rotation (90 degree clockwise)
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            rotated[j][i] = a[i][j];
        }
    }

    // Find minimum
    min = rotated[0][0];
    min_i = 0;
    min_j = 0;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(rotated[i][j] < min) {
                min = rotated[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }

    // Swap min with top element
    temp = rotated[0][0];
    rotated[0][0] = rotated[min_i][min_j];
    rotated[min_i][min_j] = temp;

    // Output
    printf("\nFinal matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }

    return 0;
}
