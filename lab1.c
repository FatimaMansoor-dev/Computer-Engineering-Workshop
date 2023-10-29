#include<stdio.h>


// func for q4.
void to_binary(int num){
    if (num==0){
        return;
    }else {
        printf("%d",num%2);
        to_binary(num/2);
    }

}

// func for q5.
void fibo(int num, int a, int b) {
    if (num == 2){
        return ;
    }else{
        int c= a+b;
        printf("%d,",c);
        a = b;
        b = c;
        fibo(num-1,a,b);
    }

}

// starting with the questions...

int main()
{
    //Q1. Write a C program that accepts an employee's ID, total worked hours in a month and
        //the amount received per hour. Print the ID and salary (with two decimal places) of the
        //employee for a particular month.
    printf("\n*** Question 1 ***\n\n");
    int Id;
    float hrs;
    int amount;
    float salary;
    printf("Enter employee ID : ");
    scanf("%d",&Id);
    printf("Enter hrs worked in a month : ");
    scanf("%f",&hrs);
    printf("Enter amount received per hr: ");
    scanf("%d",&amount);
    printf("Your monthly salary is PKR %.2f",hrs*amount);
    
    //Q2. Write a C program that takes the height and width of a rectangle as an input from user
        //and compute the perimeter and area of a rectangle.
    printf("\n\n*** Question 2 ***\n\n");
    float height;
    float width;
    float area;
    float perimeter;
    printf("Enter Height cm : ");
    scanf("%f",&height);
    printf("Enter Width in cm : ");
    scanf("%f",&width);
    printf("Area of rect is %.2f cm^2", height*width);
    printf("\nPerimeter of rect is %.2f cm",(2*height)+(2*width));
    
    //Q3. Write a C program to accept the height of a person in centimeters and categorize the
        //person according to his height. (Height < 150cm – Dwarf, Height=150cm – Average,
        //Height>=165cm – Tall).
    float heigh;
    printf("\n\n*** Question 3 ***\n\n");
    printf("Enter Height in cm : ");
    scanf("%f",&heigh);
    if (heigh < 150){
        printf("dwarf");
    } else if (heigh == 150) {
        printf("Average");
    } else if (heigh >= 165){
        printf("Tall");
    } else {
        printf("invalid");  
    }
    
    //Q4. Write a program in C to convert a decimal number to a binary number using functions.

    // function is defined on top
     int num;
     printf("\n\n*** Question 3 ***\n\n");
     printf("Enter Number: ");
     scanf("%d",&num);
     to_binary(num);
 


    //Q5

    // function defined on top
  
    int num2;
    int a = 0;
    int b = 1;
    printf("\n\n*** Question 5 ***\n\n");
    printf("Enter a num : ");
    scanf("%d",&num2);
    printf("%d,%d,",a,b);
    fibo(num2, a, b);      
       
    return 0;
}