#include <stdio.h>

int faktorial(int n) {
    if(n<=1)
        return 1;
    return n*faktorial(n-1);
}

int jumlah(int n) {
    if(n==0)
        return 0;
    return n+jumlah(n-1);
}

int fibonacci(int n) {
    if(n<=1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
    int pilihan,n;

    do {
        printf("\n=== RECURSIVE NUMBER ANALYZER ===\n");
        printf("1. Faktorial\n");
        printf("2. Jumlah Bilangan 1..n\n");
        printf("3. Fibonacci\n");
        printf("4. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d",&pilihan);

        switch(pilihan) {
            case 1:
                printf("Masukkan n: ");
                scanf("%d",&n);
                if(n>=0&&n<=12)
                    printf("Hasil: %d\n",faktorial(n));
                else
                    printf("Input harus 0-12!\n");
                break;

            case 2:
                printf("Masukkan n: ");
                scanf("%d",&n);
                if(n>=0)
                    printf("Hasil: %d\n",jumlah(n));
                else
                    printf("Input harus >= 0!\n");
                break;

            case 3:
                printf("Masukkan jumlah suku (1-20): ");
                scanf("%d",&n);
                if(n>=1&&n<=20) {
                    for(int i=0;i<n;i++)
                        printf("%d ",fibonacci(i));
                    printf("\n");
                } else {
                    printf("Input harus 1-20!\n");
                }
                break;

            case 4:
                printf("Program selesai.\n");
                break;

            default:
                printf("Pilihan tidak valid!\n");
        }
    } while(pilihan!=4);

    return 0;
}
