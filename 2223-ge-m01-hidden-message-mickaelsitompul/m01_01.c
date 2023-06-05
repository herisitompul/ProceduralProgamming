// 12S22027 - Ferry Panjaitan
// 12S22033 - Mickael Heri Irawan Sitompul

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 120

// Fungsi untuk menghasilkan boxed string
void boxedString(int l, char* s) {
    int n = (strlen(s) - 1) / l + ((strlen(s) - 1) % l != 0);

    // Print rows
    int i = 0;
    do {
        int j = 0;
        do {
            int index = i * l + j;
            if (index < strlen(s) - 1) {
                printf("%c", s[index]);
            } else {
                printf("#");
            }
            j++;
        } while (j < l);
        printf("\n");
        i++;
    } while (i < n);

    // Create 2D array
    char kata[n][l];
    int k = 0;
    i = 0;
    do {
        int j = 0;
        do {
            if (k < strlen(s) - 1) {
                kata[i][j] = s[k++];
            } else {
                kata[i][j] = '#';
            }
            j++;
        } while (j < l);
        i++;
    } while (i < n);

    // Print columns
    int j = 0;
    do {
        i = 0;
        do {
            printf("%c", kata[i][j]);
            i++;
        } while (i < n);
        j++;
    } while (j < l);
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <length>\n", argv[0]);
        return 1;
    }

    int l = atoi(argv[1]);
    if (l < 1) {
        printf("Length must be positive integer\n");
        return 1;
    }

    char s[MAX_LEN];
    if (!fgets(s, sizeof(s), stdin)) {
        printf("Failed to read input\n");
        return 1;
    }

    // Hapus karakter newline pada akhir input
    s[strcspn(s, "\n")] = '\0';

    boxedString(l, s);

    return 0;
}
