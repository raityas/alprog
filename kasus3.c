#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0; // Bukan prima
    }
    if (n == 2) {
        return 1; // 2 adalah bilangan prima
    }
    if (n % 2 == 0) {
        return 0; // Bilangan genap selain 2 bukan bilangan prima
    }

    // Mengecek dari 3 hingga sqrt(n)
    int batas = sqrt(n);
    for (int i = 3; i <= batas; i += 2) {
        if (n % i == 0) {
            return 0; // Jika ditemukan pembagi, maka bukan prima
        }
    }
    return 1; // Prima
}

int main() {
    int N;
    
    // Membaca input
    scanf("%d", &N);
    
    // Mengecek apakah N prima atau bukan
    if (isPrime(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}