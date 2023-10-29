#include<stdio.h>
#include <cstring>

//structure of q6
struct Distance {
    int feet;
    int inches;
};

// Function to add two distances and return the result
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance sums;

    sums.inches = d1.inches + d2.inches;
    sums.feet = d1.feet + d2.feet + (sums.inches / 12);

    // Update the inches to be in the range [0, 11]
    sums.inches = sums.inches % 12;

    return sums;
}


// starting with questions
int main()
{
    // Q1. Write a C program to display the first n odd natural numbers and their sum using for, while and do-while loop.
    printf("\n\n*****QUESTION 1 *****\n\n");
    printf("For loop implementation .. \n");
    int num;
    int count = 0;
    int sum=0;
    printf("Enter Limit : ");
    scanf("%d",&num);
    printf("The odd numbers upto this limit are :");
    for (int I=1;count<=num-1;I+=2){
        printf("%d,",I);
        count+=1;
        sum+=I;
        }
    printf("\n The sum of these numbers is : %d",sum);    
    
    // while
    printf("\nWhile loop implementation .. \n");
    int num2; 
    printf("\n Enter Limit : ");
    scanf("%d",&num2);
    int I=1;
    int count2 = 0;
    int sum2 = 0;
    printf("The odd numbers upto this limit are :");
    while (count2 < num2){
        printf (" %d,",I);
        sum2 += I;
        I+=2;
        
        count2 +=1;
        }
     printf("\n The sum is : %d",sum2);   

     // Do-While
     int num3;
    printf("\nDo-While loop implementation .. \n");
    printf("Enter Limit : ");
    scanf("%d",&num3);
    int j=1;
    int count3 = 0;
    int sum3 = 0;
    do {
        printf ("%d,",j);
        sum3 += j;
        j+=2;
        
        count3 +=1;
        }while (count3 < num3);
     printf("The sum is: %d",sum3);  

    //  Q2.Write a C program to make the following pattern as a pyramid with an asterisk.
        // *
       // * *
      //* * *
     //* * * *
     printf("\n\n*****QUESTION 2 *****\n\n");
    int ast_count;
    int p,q;
    printf("Enter no of rows for asteriks : ");
    scanf("%d",&ast_count);
    for (p = 1; p <= ast_count; p++) {
        // Printing spaces
        for (q = 1; q <= ast_count - p; q++) {
            printf(" ");
        }

        // Printing asteriks
        for (q = 1; q <= p; q++) {
            printf("* ");
        }

        printf("\n");
    }

    // Q3. Write a C program to compare two strings without using string library functions.
    printf("\n\n*****QUESTION 3 *****\n\n");
    char str1[50];
    char str2[50];
    int i;
    int equality_count; 

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) { 
        if (str1[i] == str2[i]) {
            equality_count += 1;
        }
    }

    if (equality_count == strlen(str1) && equality_count == strlen(str2)) {
        printf("Strings are equal\n");
    } else {
        printf("Not equal\n");
    }

    // Q4. Write a C program to read a sentence and replace lowercase characters with uppercase and vice versa.
    printf("\n\n*****QUESTION 4 *****\n\n");
    char sentence[50];
    int ind;

    printf("Enter sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (ind = 0; sentence[ind] != '\0'; ind++) {
        if (sentence[ind] >= 'a' && sentence[ind] <= 'z') {
            sentence[ind] = sentence[ind] - 'a' + 'A';
        } else if (sentence[ind] >= 'A' && sentence[ind] <= 'Z') {
            sentence[ind] = sentence[ind] - 'A' + 'a';
        }
    }

    printf("%s", sentence);

    // Q5. Write a C program to print all unique elements in an array.
    printf("\n\n*****QUESTION 5 *****\n\n");
    int n;
    printf("How many elements does your array have? : ");
    scanf("%d", &n);

    // Specify the size
    int arr[n];
    // taking input each element
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // here j is arr[0]
    for (int j = 0; j < n; j++) {
        int isUnique = 1;  
        // here p is every index except j and we check duplicates
        for (int p = 0; p < n; p++) {
            if (j != p && arr[j] == arr[p]) {
                isUnique = 0;  
                break;
            }
        }

        if (isUnique) {
            int duplicate = 0;
            for (int k = j + 1; k < n; k++) {
                if (arr[j] == arr[k]) {
                    duplicate = 1;
                    break;
                }
            }
            if (!duplicate) {
                printf("%d ", arr[j]); 
            }
        }
    }

// Q6. Write a C program to add two distances in inch-feet system using structures.
    printf("\n\n*****QUESTION 6 *****\n\n");

    struct Distance dist1, dist2, sums;

    // Input the first distance
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &dist1.feet);
    printf("Inches: ");
    scanf("%d", &dist1.inches);

    // Input the second distance
    printf("Enter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &dist2.feet);
    printf("Inches: ");
    scanf("%d", &dist2.inches);

    // Add the distances
    sums = addDistances(dist1, dist2);

    // Display the result
    printf("Sum of distances: %d feet %d inches\n", sums.feet, sums.inches);

    return 0;
}