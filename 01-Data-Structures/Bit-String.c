#include<stdio.h>

int superset[20], supersetsize = 0,
    setA[20], setAsize = 0,
    setB[20], setBsize = 0,
    bitA[20], bitB[20], result[20];

void getset(int arr[], int *size, char name) {
    printf("Enter number of elements for Set %c:\n", name);
    scanf("%d", size);
    printf("Enter elements of Set %c: ", name);
    for (int i = 0; i < *size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to print a set
void printset(int arr[], int size, char *name) {
    printf("%s: {", name);
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i != size - 1) printf(", ");
    }
    printf("}\n");
}

// Function to print the bit string of a set
void printbitstring(int arr[], char *name) {
    printf("Bit string for %s: [", name);
    for (int i = 0; i < supersetsize; i++) {
        printf("%d", arr[i]);
        if (i != supersetsize - 1) printf(", ");
    }
    printf("]\n");
}

// Function to generate bit strings for Set A and B
void generatebitstrings() {
    for (int i = 0; i < supersetsize; i++) {
        bitA[i] = 0;
        bitB[i] = 0;
    }
    // Mark presence of Set A and Set B elements
    for (int i = 0; i < setAsize; i++) {
        for (int j = 0; j < supersetsize; j++) {
            if (setA[i] == superset[j]) bitA[j] = 1;
        }
    }
    for (int i = 0; i < setBsize; i++) {
        for (int j = 0; j < supersetsize; j++) {
            if (setB[i] == superset[j]) bitB[j] = 1;
        }
    }

    // Print the bit strings for Set A and Set B
    printbitstring(bitA, "Set A");
    printbitstring(bitB, "Set B");
}

// Function to perform set operations: Union, Intersection, or Difference
void setoperation(char op) {
    generatebitstrings(); // Prepare the bit strings
    for (int i = 0; i < supersetsize; i++) {
        if (op == '|') result[i] = bitA[i] | bitB[i]; // Union
        else if (op == '&') result[i] = bitA[i] & bitB[i]; // Intersection
        else if (op == '-') result[i] = bitA[i] & !bitB[i]; // Difference
    }

    // Print the bit string of the result
    printbitstring(result, "Result");

    // Print the result set
    printf("Result of operation: {");
    int first = 1;
    for (int i = 0; i < supersetsize; i++) {
        if (result[i] == 1) {
            if (!first) printf(", ");
            printf("%d", superset[i]);
            first = 0;
        }
    }
    printf("}\n");
}

// Main function placed at the end
void main() {
    int choice;
    do {
        printf("\nMenu:\n"
               "1. Enter Universal Set\n"
               "2. Enter Set A\n"
               "3. Enter Set B\n"
               "4. Display Sets\n"
               "5. Union (A OR B)\n"
               "6. Intersection (A AND B)\n"
               "7. Difference (A - B)\n"
               "8. Exit\n"
               "Choose: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: getset(superset, &supersetsize, 'U'); break;
            case 2: getset(setA, &setAsize, 'A'); break;
            case 3: getset(setB, &setBsize, 'B'); break;
            case 4: printset(superset, supersetsize, "Universal Set");
                    printset(setA, setAsize, "Set A");
                    printset(setB, setBsize, "Set B");
                    break;
            case 5: setoperation('|'); break; // Union (OR)
            case 6: setoperation('&'); break; // Intersection (AND)
            case 7: setoperation('-'); break; // Difference (A - B)
            case 8: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 8);
}
