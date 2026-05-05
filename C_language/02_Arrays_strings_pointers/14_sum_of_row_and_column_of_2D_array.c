#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols];

    printf("Enter elements:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    int choice;
    printf("\n1. Sum of a Row");
    printf("\n2. Sum of a Column");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        int r;
        printf("Enter row number (0 to %d): ", rows-1);
        scanf("%d", &r);

        if(r < 0 || r >= rows) {
            printf("Invalid row number!\n");
            return 1;
        }

        int sum = 0;
        for(int j = 0; j < cols; j++)
            sum += a[r][j];

        printf("Sum of row %d = %d\n", r, sum);

    } else if(choice == 2) {
        int c;
        printf("Enter column number (0 to %d): ", cols-1);
        scanf("%d", &c);

        if(c < 0 || c >= cols) {
            printf("Invalid column number!\n");
            return 1;
        }

        int sum = 0;
        for(int i = 0; i < rows; i++)
            sum += a[i][c];

        printf("Sum of column %d = %d\n", c, sum);

    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
