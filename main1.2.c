#include <stdio.h>

int main() {
    int a, b, c;
    int toplam_degeri = 1000;

    for (a = 1; a < toplam_degeri / 3; ++a) {
        for (b = a + 1; b < toplam_degeri / 2; ++b) {
            c = toplam_degeri - a - b;
            if (a * a + b * b == c * c) {
                printf("Ozel Pisagor Uclusu: a = %d, b = %d, c = %d\n", a, b, c);
                return 0;  
            }
        }
    }
}
