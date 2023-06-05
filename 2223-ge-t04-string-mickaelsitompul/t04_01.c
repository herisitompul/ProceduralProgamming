#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Menerima input command line argument
    if (argc != 2) {
        printf("Usage: %s <length>\n", argv[0]);
        return 1;
    }
    int l = atoi(argv[1]);

    // Menerima input string dari pengguna
    char message[100];
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';

    // Menghitung jumlah baris dan kolom yang dibutuhkan
    int len = strlen(message);
    int rows = len / l;
    if (len % l != 0) {
        rows++;
    }
    int cols = l;

    // Membuat matriks untuk menyimpan karakter
    char matrix[rows][cols];

    // Mengisi matriks dengan karakter dari string
    int idx = 0;
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            if (idx < len) {
                matrix[i][j] = message[idx];
            } else {
                matrix[i][j] = '#';  // Karakter filler jika string tidak cukup panjang
            }
            idx++;
        }
    }

    // Menampilkan matriks
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    // Menghasilkan hidden message dari matriks
    char hidden_message[100];
    idx = 0;
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            if (matrix[i][j] != '#') {
                hidden_message[idx] = matrix[i][j];
                idx++;
            }
        }
    }
    hidden_message[idx] = '\0';

    // Menampilkan hidden message
    printf("Hidden message: %s\n", hidden_message);

    return 0;
}
