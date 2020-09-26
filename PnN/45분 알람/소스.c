#include <stdio.h>

int main() {

    int h, m;
    scanf_s("%d %d", &h, &m);

    if (0 <= h <= 23 && 0 <= m <= 59){
        if (m < 45 && h > 0) {
            m = m + 60 - 45;
            if (h == 1)
                h = 12;
            else
                h = h - 1;
        }
        else if (h == 0 && m < 45) {
            m = m + 60 - 45;
            h = 23;
        }
        else if (m > 44) {
            m = m - 45;
        }
        printf("%d %d", h, m);
    }

    return 0;
}