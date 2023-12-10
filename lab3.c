#include <stdio.h>
#include <string.h>

//1. Write a program in C to swap elements using call by reference.
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//2. Write a program in C to print a string in reverse using pointers.
void printReverse(const char *str) {
    int length = strlen(str);
     // Pointing to the last character of the string
    const char *ptr = str + length - 1;
    // Printing characters in reverse order
    printf("Reversed String: ");
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }

    printf("\n");
}

// 3. Write a C program to input and print array elements using pointers.
void inputArray(int *arr, int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

void printArray(const int *arr, int size) {
    printf("\nArray elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

// 4. Write a C program to search for an element in an array using pointers.
int searchElement(const int *arr, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == key) {
            return i;
        }
    }
    return -1;
}

//5. Write a C program to add two matrices using pointers.
void addMatrices(int *mat1, int *mat2, int *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *((result + i * cols) + j) = *((mat1 + i * cols) + j) + *((mat2 + i * cols) + j);
        }
    }
}

// Function to display a matrix
void displayMatrix(int *mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *((mat + i * cols) + j));
        }
        printf("\n");
    }
}

int main() {
    printf("***** QUESTION 1 *****\n");
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    swap(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    printf("\n***** QUESTION 2 *****\n");
    char inputString[100];
    getchar();
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    printReverse(inputString);
    
    printf("\n***** QUESTION 3 *****\n");
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
     inputArray(arr, n);
    printArray(arr, n);
    
    printf("\n***** QUESTION 4 *****\n");
    const SIZE = 5;
    int arr2[SIZE] = {10, 25, 35, 48, 50};  
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int res = searchElement(arr2, SIZE, key);
    if (res != -1) {
        printf("Element %d found at index %d.\n", key, res);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    
    
    printf("\n***** QUESTION 5 *****\n");
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
     int mat1[rows][cols], mat2[rows][cols], result[rows][cols];
     // first mat
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // second mat
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    // Addition
    addMatrices(&mat1[0][0], &mat2[0][0], &result[0][0], rows, cols);

    // Display the matrices and their sum
    printf("\nMatrix 1:\n");
    displayMatrix(&mat1[0][0], rows, cols);

    printf("\nMatrix 2:\n");
    displayMatrix(&mat2[0][0], rows, cols);

    printf("\nSum of Matrices:\n");
    displayMatrix(&result[0][0], rows, cols);

    return 0;
}
    