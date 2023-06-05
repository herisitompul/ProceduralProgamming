// 12S22027 - Ferry Panjaitan
// 12S22033 - Mickael Heri Irawan Sitompul

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 120

char **createMatrix(int n, int m) {
    char **matrix = malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        matrix[i] = malloc(m * sizeof(char));
    }
    return matrix;
}

// Fungsi untuk menghasilkan boxed string
void boxedString(int l, char* s) {
    // Menghitung jumlah baris yang diperlukan pada output
    int n = (strlen(s) - 1) / l + ((strlen(s) - 1) % l != 0);

    char **kata = createMatrix(n, l);
    int k = 0;
    int i = 0, j = 0;
    while (i < n) {
        j = 0;
        while (j < l) {
            if (k < strlen(s) - 1) {
                kata[i][j] = s[k++];
            } else {
                kata[i][j] = '#';
            }
            j++;
        }
        i++;
    }

    // Mencetak output pada baris
    i = 0;
    while (i < n) {
        j = 0;
        while (j < l) {
            int index = i * l + j;
            if (index < strlen(s) - 1) {
                printf("%c", s[index]);
            } else {
                printf("#");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    // Mencetak output pada kolom
    j = 0;
    while (j < l) {
        i = 0;
        while (i < n) {
            printf("%c", kata[i][j]);
            i++;
        }
        j++;
    }
    printf("\n");

    //matriks kata
    for (int i = 0; i < n; i++) {
        free(kata[i]);
    }
    free(kata);
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

    // Memanggil fungsi boxedString dengan parameter l dan s
    boxedString(l, s);

    return 0;
}
