#include <iostream>
using namespace std;

// Deklarasi kelas
class Robot {
public:
    string nama;
    int umur;
    string mbti;

    // Metode untuk menampilkan informasi
    void perkenalandiri() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "MBTI: " << mbti << endl;
    }
};

int main() {
    // Membuat objek dari kelas robot
    Robot r1;
    Robot r2;

    // Memberi nilai atribut objek
    r1.nama = "Maudina";
    r1.umur = 20;
    r1.mbti = "ISTJ";

    // Memberi nilai atribut objek
    r2.nama = "fenita";
    r2.umur = 21;
    r2.mbti = "ISTJ";
    

    // Memanggil metode untuk menampilkan informasi
    r1.perkenalandiri();
    r2.perkenalandiri();

    return 0;
}