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
   // Tugas untuk Anggota yang memegang fungsi ini//
   printf ("Tugas Aneas\n");
}
void konversiWaktu(){
    //Tugas untuk Anggota yang memegang fungsi ini//
    printf ("Tugas Airis\n");
}