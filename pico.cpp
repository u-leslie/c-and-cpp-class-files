#include <stdio.h>
#include <string.h>

int main(int argc, const char **argv, const char **envp) {
    char input[51]; // Input string
    char output[51]; // Encrypted string
    int random2; // Random variable 2
    int random1; // Random variable 1
    char fix; // Fix value
    int secret3; // Secret value 3
    int secret2; // Secret value 2
    int secret1; // Secret value 1
    int len; // Length of the input string
    int i_0; // Loop variable
    int i; // Loop variable

    // Encrypted string
    strcpy(output, "apijaczhzgtfnyjgrdvqrjbmcurcmjczsvbwgdelvxxxjkyigy");
    // Disable buffering
    setvbuf(_bss_start, 0LL, 2, 0LL);
    // Prompt user for input
    printf("Enter the secret password: ");
    // Read input from user
    __isoc99_scanf("%50s", input);

    // Initialize variables
    i = 0;
    len = strlen(output);
    secret1 = 85;
    secret2 = 51;
    secret3 = 15;
    fix = 97;

    // Loop through the encryption process three times
    while (i <= 2) {
        for (i_0 = 0; i_0 < len; ++i_0) {
            // Calculate random values
            random1 = (secret1 & (i_0 % 255)) + (secret1 & ((i_0 % 255) >> 1));
            random2 = (random1 & secret2) + (secret2 & (random1 >> 2));
            // Encrypt input string
            input[i_0] = ((random2 & secret3) + input[i_0] - fix + (secret3 & (random2 >> 4))) % 26 + fix;
        }
        ++i;
    }

    // Check if input matches the encrypted string
    if (!memcmp(input, output, len))
        printf("SUCCESS! Here is your flag: %s\n", "picoCTF{sample_flag}");
    else
        puts("FAILED!");

    return 0;
}
