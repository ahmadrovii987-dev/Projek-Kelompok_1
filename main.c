#include <stdio.h>
#include <stdlib.h>

//Deklarasi Fungsi//

void konversiSuhu();
void konversiJarak();
void konversiBerat();
void konversiWaktu();

//Tampilan Menu Utama//
int main (){
    int pilihan;

    do 
    {   printf ("===================================\n");
        printf ("Kalkulator Konversi Satuan CLI\n");
        printf ("===================================\n");

        printf ("1. Konversi Suhu\n");
        printf ("2. Konversi Jarak\n");
        printf ("3. Konversi Berat\n");
        printf ("4. Konversi Waktu\n");
        printf ("5. Keluar Program\n");

        printf ("Pilih Menu (1-5)\n");
        scanf ("%d", &pilihan);

        //Percabangan untuk menentukan pilihan user//
        switch (pilihan){
            case 1: konversiSuhu();
            break;
            case 2: konversiJarak();
            break;
            case 3: konversiBerat();
            break;
            case 4: konversiWaktu();
            break;
            case 5: printf ("Terima kasih telah menggunakan program ini\n");
            break;
            default:
            printf ("Pilihan tidak valid, silahkan ulangi\n");
        }
    }
    while (pilihan !=5);
    return 0;
}

//Implementasi Fungsi oleh Anggota//
void konversiSuhu(){
    float c, f, k;

    printf("\n--- Konversi Suhu (dari celcius) ---\n"); 
    printf("Masukkan suhu dalam Celsius: ");
    
    // Mengambil input dari user
    if (scanf("%f", &c) != 1) {
        printf("Input harus berupa angka!\n");
        while(getchar() != '\n'); // Membersihkan buffer input
        return;
    }

    // Perhitungan menggunakan rumus standar
    f = (c * 9 / 5) + 32;
    k = c + 273.15;

    // Menampilkan hasil
    printf("\nHasil Konversi dari %.2f Celsius:\n", c);
    printf("===================================\n");
    printf("Fahrenheit : %.2f F\n", f);
    printf("Kelvin     : %.2f K\n", k);
}

void konversiJarak(){
    int pilihan;
    float nilai, hasil;

    printf("=== KALKULATOR KONVERSI JARAK ===\n");
    printf("Pilih jenis konversi:\n");
    printf("1. Meter ke Kilometer\n");
    printf("2. Kilometer ke Meter\n");
    printf("3. Meter ke Mil\n");
    printf("4. Mil ke Meter\n");
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &pilihan);

    printf("Masukkan nilai: ");
    scanf("%f", &nilai);

    switch(pilihan) {
        case 1:
            hasil = nilai / 1000;
            printf("Hasil: %.2f km\n", hasil);
            break;
        case 2:
            hasil = nilai * 1000;
            printf("Hasil: %.2f m\n", hasil);
            break;
        case 3:
            hasil = nilai / 1609.34;
            printf("Hasil: %.2f mi\n", hasil);
            break;
        case 4:
            hasil = nilai * 1609.34;
            printf("Hasil: %.2f m\n", hasil);
            break;
        default:
            printf("Pilihan tidak valid!\n");
    }
    return ;
}
void konversiBerat(){
   int pilihan;
    float nilai, hasil;

    printf("=== KALKULATOR KONVERSI BERAT ===\n");
    printf("Pilih jenis konversi:\n");
    printf("1. Gram ke Kilogram\n");
    printf("2. Kilogram ke Gram\n");
    printf("3. Gram ke Miligram\n");
    printf("4. Miligram ke Gram\n");
    printf("5. Kilogram ke Ton\n");
    printf("6. Ton ke Kilogram\n");
    printf("Masukkan pilihan (1-6): ");
    scanf("%d", &pilihan);

    printf("Masukkan nilai: ");
    scanf("%f", &nilai);

    switch(pilihan) {
        case 1:
            hasil = nilai / 1000;
            printf("Hasil: %.2f kg\n", hasil);
            break;
        case 2:
            hasil = nilai * 1000;
            printf("Hasil: %.2f g\n", hasil);
            break;
        case 3:
            hasil = nilai * 1000;
            printf("Hasil: %.2f mg\n", hasil);
            break;
        case 4:
            hasil = nilai / 1000;
            printf("Hasil: %.2f g\n", hasil);
            break;
        case 5:
            hasil = nilai / 1000;
            printf("Hasil: %.2f ton\n", hasil);
            break;
        case 6:
            hasil = nilai * 1000;
            printf("Hasil: %.2f kg\n", hasil);
            break;
        default:
            printf("Pilihan tidak valid!\n");
    }

    return ;
}
void konversiWaktu(){
    int pilihan;
    float nilai, hasil;
    
    printf("\n=== KALKULATOR KONVERSI WAKTU ===\n");
    printf("1. Jam ke Menit\n");
    printf("2. Menit ke Jam\n");
    printf("3. Menit ke Detik\n");
    printf("4. Detik ke Menit\n");
    printf("5. Jam ke Detik\n");
    printf("6. Detik ke Jam\n");
    printf("Masukkan pilihan (1-6): ");

    if (scanf(" %d", &pilihan) != 1) { 
        printf("Input harus berupa angka!\n");
        while(getchar() != '\n'); 
        return; 
    }

    printf("Masukkan nilai waktu: ");
    scanf(" %f", &nilai);

    switch(pilihan) {
        case 1:
            hasil = nilai * 60;
            printf("Hasil: %.2f Menit\n", hasil);
            break;
        case 2:
            hasil = nilai / 60;
            printf("Hasil: %.2f Jam\n", hasil);
            break;
        case 3:
            hasil = nilai * 60;
            printf("Hasil: %.2f Detik\n", hasil);
            break;
        case 4:
            hasil = nilai / 60;
            printf("Hasil: %.2f Menit\n", hasil);
            break;
        case 5:
            hasil = nilai * 3600;
            printf("Hasil: %.2f Detik\n", hasil);
            break;
        case 6:
            hasil = nilai / 3600;
            printf("Hasil: %.2f Jam\n", hasil);
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break; 
    }
    return ;
}

