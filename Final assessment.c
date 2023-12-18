//Final Assessment.c
#include <stdio.h>

int main() {
    int choice;

    while (1) {
        printf("================================\n\n");
        printf("[0] - Exit\n");
        printf("[1] - Triangle\n");
        printf("[2] - Square\n");
        printf("[3] - Rectangle\n");
         // Use a do-while loop to ensure a valid choice is made
        do {
            printf("What would you like to do?: ");
            scanf("%d", &choice);

            if (choice < 0 || choice > 3) {
                printf("Invalid input.\n");
            }
        } while (choice < 0 || choice > 3);

        switch (choice) {
            case 0:
                printf("\nProgrammed by: Alexander Miguel Pallasigue\n");
                return 0;

            case 1:
                printf("\nTriangle Selected.\n");
                int subChoice;
                printf("[0] - Back\n");
                printf("[1] - Perimeter\n");
                printf("[2] - Area\n");

                while (1) {
                    printf("What would you like to find?: ");
                    scanf("%d", &subChoice);

                    if (subChoice == 0) {
                        // Go back to the main menu
                        break;
                    }

                    else if (subChoice == 1) {
                        int side1, side2, side3;
                        printf("\nPerimeter Selected.\n");
                        do {
                            printf("Enter Length of Side 1 [>0]: ");
                            scanf("%d", &side1);
                        } while (side1 <= 0);
                        do {
                            printf("Enter Length of Side 2 [>0]: ");
                            scanf("%d", &side2);
                        } while (side2 <= 0);
                        do {
                            printf("Enter Length of Side 3 [>0]: ");
                            scanf("%d", &side3);
                        } while (side3 <= 0);

                        // Calculate and display the total perimeter
                        printf("\nPerimeter = %d\n\n", side1 + side2 + side3);
                        // Go back to the main menu
                        break;
                    }

                    else if (subChoice == 2) {
                        int base, height;
                        printf("\nArea Selected.\n");
                        do {
                            printf("Enter Base of Triangle [>0]: ");
                            scanf("%d", &base);
                        } while (base <= 0);
                        do {
                            printf("Enter Height of Triangle [>0]: ");
                            scanf("%d", &height);
                        } while (height <= 0);

                         // Calculate and display the total area
                        printf("\nArea = %.2f\n\n", (float)base * height / 2);
                        // Go back to the main menu
                        break;
                    }

                    else {
                          printf("Invalid input\n");
                    }
                }
                break;

            case 2:
                printf("\nSquare Selected.\n");
                int side;
                printf("[0] - Back\n");
                printf("[1] - Perimeter\n");
                printf("[2] - Area\n");

                while (1) {
                    printf("What would you like to find?: ");
                    scanf("%d", &subChoice);

                    if (subChoice == 0) {
                        // Go back to the main menu
                        break;
                    }

                    else if (subChoice == 1) {
                        printf("\nPerimeter Selected.\n");
                        do {
                            printf("Enter Length of Side [>0]: ");
                            scanf("%d", &side);
                        } while (side <= 0);

                        // Calculate and display the total perimeter
                        printf("\nPerimeter = %d\n\n", 4 * side);
                        // Go back to the main menu
                        break;
                    }

                    else if (subChoice == 2) {
                        printf("\nArea Selected.\n");
                        do {
                            printf("Enter Length of Side [>0]: ");
                            scanf("%d", &side);
                        } while (side <= 0);

                        // Calculate and display the total area
                        printf("\nArea = %d\n\n", side * side);
                        // Go back to the main menu
                        break;
                    }

                    else {
                          printf("Invalid input\n");
                    }
                }
                break;

            case 3:
                printf("\nRectangle Selected.\n");
                int length, width;
                printf("[0] - Back\n");
                printf("[1] - Perimeter\n");
                printf("[2] - Area\n");

                while (1) {
                    printf("What would you like to find?: ");
                    scanf("%d", &subChoice);

                    if (subChoice == 0) {
                        // Go back to the main menu
                        break;
                    }

                    else if (subChoice == 1) {
                        printf("\nPerimeter Selected.\n");
                        do {
                            printf("Enter Length of Rectangle [>0]: ");
                            scanf("%d", &length);
                        } while (length <= 0);
                        do {
                            printf("Enter Width of Rectangle [>0]: ");
                            scanf("%d", &width);
                        } while (width <= 0);

                        // Calculate and display the total perimeter
                        printf("\nPerimeter = %d\n\n", 2 * (length + width));
                        // Go back to the main menu
                        break;
                    }

                    else if (subChoice == 2) {
                        printf("\nArea Selected.\n");
                        do {
                            printf("Enter Length of Rectangle [>0]: ");
                            scanf("%d", &length);
                        } while (length <= 0);
                        do {
                            printf("Enter Width of Rectangle [>0]: ");
                            scanf("%d", &width);
                        } while (width <= 0);

                        // Calculate and display the total area
                        printf("\nArea = %d\n\n", length * width);
                        // Go back to the main menu
                        break;
                    }

                    else {
                          printf("Invalid input\n");
                    }
                }
                break;

            default:
                printf("\nInvalid input.\n");
        }
    }

    return 0;
}
