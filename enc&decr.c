#include <stdio.h>
#include <ctype.h>
#include <string.h>


void encrypt(char *text, int shift) {
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            int ascii_offset = isupper(text[i]) ? 65 : 97;
            text[i] = (char)(((text[i] - ascii_offset + shift) % 26) + ascii_offset);
        }
    }
}


void decrypt(char *text, int shift) {
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            int ascii_offset = isupper(text[i]) ? 65 : 97;
            text[i] = (char)(((text[i] - ascii_offset - shift + 26) % 26) + ascii_offset);
        }
    }
}

int main() {
    char text[100];
    int shift;
    char choice;

    printf("Enter the text to encrypt: ");
    fgets(text, sizeof(text), stdin);
    text[strlen(text) - 1] = '\0'; // Remove the newline character

    printf("Do you want to encrypt the text? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        printf("Enter the shift value (1-25): ");
        scanf("%d", &shift);

        encrypt(text, shift);
        printf("Encrypted text: %s\n", text);
    } else {
        printf("No encryption performed.\n");
    }

    printf("Do you want to decrypt the text? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') {
        printf("Enter the shift value (1-25): ");
        scanf("%d", &shift);

        decrypt(text, shift);
        printf("Decrypted text: %s\n", text);
    } else {
        printf("No decryption performed.\n");
    }

    return 0;
}
