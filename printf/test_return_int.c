int result = return_int(12345);
// Expected output: 5
// Explanation: The input integer is 12345, which has 5 digits.int main() {
    int result;

    // Test case 1: Positive number with multiple digits
    result = return_int(12345);
    if (result == 5) {
        printf("Test case 1 passed\n");
    } else {
        printf("Test case 1 failed\n");
    }

    // Test case 2: Positive number with single digit
    result = return_int(7);
    if (result == 1) {
        printf("Test case 2 passed\n");
    } else {
        printf("Test case 2 failed\n");
    }

    // Test case 3: Negative number with multiple digits
    result = return_int(-9876);
    if (result == 5) {
        printf("Test case 3 passed\n");
    } else {
        printf("Test case 3 failed\n");
    }

    // Test case 4: Negative number with single digit
    result = return_int(-2);
    if (result == 1) {
        printf("Test case 4 passed\n");
    } else {
        printf("Test case 4 failed\n");
    }

    return 0;
}