#include <stdio.h>
#include <stdlib.h>

int main()
{
    // introducing the program
    /*
    welcome to our simple arithmentic teacher
    1. pick an operator of your choice
    2. please enter any random number
    3. enter the answer
    4. evaluate the answer
    */

    //Step 1
    printf("these are the available operators, choose any");
    printf("a.) + \n");
    printf("b.) - \n");
    printf("c.) * \n");
    printf("d.) / \n");
    printf("Please enter any option from above \n");

    char oper;
    scanf("%c", &oper);

    //STEP 2
    int firstNumber;
    int secondNumber;

    printf("Enter the first number \n");
    scanf("%d", &firstNumber);
    printf("Enter the second number \n");
    scanf("%d", &secondNumber);

    //STEP 3
    float answer;
    switch(oper){
    case 'a':
        printf("What is %d + %d \n ", firstNumber, secondNumber);
        scanf("%f", &answer);
        break;
    case 'b':
        printf("What is %d - %d \n ", firstNumber, secondNumber);
        scanf("%f", &answer);
        break;
    case 'c':
        printf("What is %d * %d \n ", firstNumber, secondNumber);
        scanf("%f", &answer);
        break;
    case 'd':
        printf("What is %d / %d \n ", firstNumber, secondNumber);
        scanf("%f", &answer);
        break;
    default:
        printf("Wrong operator option picked");
        break;
    }

    //STEP 4
    //evaluating the answer

    float correctAnswer;
    //addition
    if(oper == 'a'){
        correctAnswer= firstNumber+secondNumber;
        if(correctAnswer == answer){
            printf("The answer is correct");
        }else{
            printf("The answer is wrong");
        }
    }else if(oper == 'b'){
        correctAnswer= firstNumber-secondNumber;
        if(correctAnswer == answer){
            printf("The answer is correct");
        }else{
            printf("The answer is wrong");
        }
    }else if(oper == 'c'){
        correctAnswer= firstNumber*secondNumber;
        if(correctAnswer == answer){
            printf("The answer is correct");
        }else{
            printf("The answer is wrong");
        }
    }else if(oper == 'd'){
        correctAnswer= firstNumber/secondNumber;
        if(correctAnswer == answer){
            printf("The answer is correct");
        }else{
            printf("The answer is wrong");
        }
    }
    return 0;
}
