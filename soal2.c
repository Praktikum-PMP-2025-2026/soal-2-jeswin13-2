/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 5 - Foundation of Algorithm
 *   Hari dan Tanggal    : Rabu, 13-05-2026
 *   Nama (NIM)          : Jeswinder Singh (13224063)
 *   Nama File           : Modul5.c
 *   Deskripsi           : Program Island
 * 
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int n, m;
char pulau[100][100];

int dfs(int x, int y) {
    if (x < 0||y < 0||y >= m||x>=n|| pulau[x][y] == '0') {
        return 0;
    }
    
    pulau[x][y] = '0';

    int count = 1 + dfs(x + 1, y) + dfs(x - 1, y) + dfs(x, y + 1) + dfs(x, y - 1); 

    return count;
}

int main() {
    scanf("%d", &n);
    scanf ("%d", &m);

    for (int i = 0; i < n; i++) {
        scanf("%s", pulau[i]);
    }

    int a = 0;
    int b = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (pulau[i][j] == '1') {
                a = a +1 ;
                int luas = dfs(i, j);
                if (luas > b) {
                    b = luas;
                }
            }
        }
    }

    printf("ISLANDS %d\n", a);
    printf("LARGEST %d\n", b);
    return 0;
}

//https://www.geeksforgeeks.org/dsa/depth-first-traversal-dfs-on-a-2d-array//
//https://www.geeksforgeeks.org/dsa/find-number-of-closed-islands-in-given-matrix//
//https://www.geeksforgeeks.org/dsa/maximum-connected-group-making-a-large-island//
//https://www.geeksforgeeks.org/c/c-program-for-find-the-number-of-islands-set-1-using-dfs//
