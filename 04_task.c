#include <stdio.h>
#include <string.h>

int main() {
    char text[100], encrypted[100], decrypted[100];
    int i;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    
    // Encryption
    for(i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if(ch >= 'a' && ch <= 'z') {
            encrypted[i] = ((ch - 'a' + 3) % 26) + 'a';
        } else if(ch >= 'A' && ch <= 'Z') {
            encrypted[i] = ((ch - 'A' + 3) % 26) + 'A';
        } else {
            encrypted[i] = ch; // keep non-alphabet same
        }
    }
    encrypted[i] = '\0';

    printf("Encrypted string: %s\n", encrypted);

    // Decryption
    for(i = 0; encrypted[i] != '\0'; i++) {
        char ch = encrypted[i];
        if(ch >= 'a' && ch <= 'z') {
            decrypted[i] = ((ch - 'a' - 3 + 26) % 26) + 'a';
        } else if(ch >= 'A' && ch <= 'Z') {
            decrypted[i] = ((ch - 'A' - 3 + 26) % 26) + 'A';
        } else {
            decrypted[i] = ch; // keep non-alphabet same
        }
    }
    decrypted[i] = '\0';

    printf("Decrypted string: %s\n", decrypted);

    return 0;
}
