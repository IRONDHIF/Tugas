int main() {
    double a, b, c;
    double max;

    printf("Masukkan sisi segitiga: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Bukan segitiga\n");
        return 0;
    }

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    if (a + b + c - max <= max) {
        printf("Bukan segitiga\n");
        return 0;
    }else if (a == b && b == c) {
        printf("Segitiga Sama Sisi\n");
    }else if (a == b || b == c || a == c) {
        printf("Segitiga Sama Kaki\n");
    }else if ((a*a + b*b == c*c) || 
             (a*a + c*c == b*b) || 
             (b*b + c*c == a*a)) {
        printf("Segitiga Siku-Siku\n");
    }
    else {
        printf("Segitiga Bebas\n");
    }

    
}
