#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    /*
    diberikan inisialisasi agar tidak terjadi error ketika karakter yang pertama dimasukkan adalah akhir karakter yang ditentukan
    contoh: karakter akan ditampung sampai karakter s
    input user 1 : Agus
    output       : Agu
    input user 2 : suga
    output       : <kosong>

    jika tidak diberikan inisialisasi
    input user 2 : suga
    output       :  >@

    akan ada karakter random yang keluar
    */
    char nama[20] = "";

    // akan ditampung sampai menemukan karakter s
    printf("Masukkan nama anda: "); scanf("%[^s]", nama);
    printf("====================\n");
    printf("Nama anda adalah: %s\n",nama);

    printf("Tekan sembarang untuk keluar dari aplikasi\n");
    getchar();
    return 0;
}
