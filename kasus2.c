#include <stdio.h>
#include <string.h>

int main() {
    char s1[101], s2[101];
    
    // Membaca input string s1 dan s2
    scanf("%s", s1);
    scanf("%s", s2);
    
    // Membandingkan panjang string
    if (strlen(s1) != strlen(s2)) {
        printf("BERBEDA\n");
    } else {
        // Jika panjang sama, cek apakah identik
        if (strcmp(s1, s2) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }

    return 0;
}