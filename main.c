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
        printf ("Keluar Program\n");

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
    //Tugas untuk Anggota yang memegang fungsi ini//
    printf("Tugas Dzejjy\n");
}
void konversiJarak(){
    //Tugas untuk Anggota yang memegang fungsi ini//
    printf ("Tugas Daus\n");
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

    return 0;
}
void konversiWaktu(){
    //Tugas untuk Anggota yang memegang fungsi ini//
    printf ("Tugas Airis\n");
}