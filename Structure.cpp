#include <iostream>
#include <string>
using namespace std;

struct Zodiak {
    string nama;
    int hariMulai, bulanMulai;
    int hariSelesai, bulanSelesai;
};

string tentukanZodiak(int hari, int bulan) {
    // Array dari struktur Zodiak
    Zodiak zodiak[] = {
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITTARIUS", 22, 11, 21, 12}
    };

    for (int i = 0; i < 12; i++) {
        if ((bulan == zodiak[i].bulanMulai && hari >= zodiak[i].hariMulai) ||
            (bulan == zodiak[i].bulanSelesai && hari <= zodiak[i].hariSelesai)) {
            return zodiak[i].nama;
        }
    }
    return "Zodiak tidak ditemukan";
}

int main() {
    int hari, bulan, tahun;

    cout << "Tanggal Lahir Anda [tgl-bln-tahun]: ";
    scanf("%d-%d-%d", &hari, &bulan, &tahun);

    cout << "Zodiak Anda adalah: " << tentukanZodiak(hari, bulan) << endl;

    return 0;
}
