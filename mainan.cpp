#include <iostream>
using namespace std;

// Kelas dasar
class Mainan {
protected:
    string warna;
    int harga;
    int tahunrilis;
    string bentuk;
    
public:
    // Constructor
    Mainan (string warna, int harga, int tahunrilis, string bentuk) : warna(warna), harga(harga), tahunrilis(tahunrilis), bentuk(bentuk) {}

    string getwarna() {
        return warna;
    }

    int getharga() {
        return harga;
    }
    int gettahunrilis() {
        return tahunrilis;
    }
    string getbentuk() {
        return bentuk;
    }

    virtual double cekharga() {
        return 0.0;
    }

    // Destructor
    virtual ~Mainan() {
        cout << "Tampilkan objek Mainan" << endl;
    }
};

// Kelas turunan
class Mainanboneka : public Mainan {
public:
    // Constructor
    Mainanboneka(string warna, int harga, int tahunrilis, string bentuk) : Mainan (warna, harga, tahunrilis, bentuk) {}

    string getwarna() {
        return warna;
    }

    int getharga() {
        return harga;
    }
    int gettahunrilis() {
        return tahunrilis;
    }
    string getbentuk() {
        return bentuk;
    }

    // Destructor
    ~Mainanboneka() {
        cout << "Tampilkan objek Mainanboneka" << endl;
    }
};

// Kelas turunan lainnya
class Mainanmobil : public Mainan {
public:
    // Constructor
    Mainanmobil(string warna, int harga, int tahunrilis, string bentuk) : Mainan(warna, harga, tahunrilis, bentuk) {}

    string getwarna() {
        return warna;
    }

    int getharga() {
        return harga;
    }
    int gettahunrilis() {
        return tahunrilis;
    }
    string getbentuk() {
        return bentuk;
    }

    // Destructor
    ~Mainanmobil() {
        cout << "Tampilkan objek Mainanmobil" << endl;
    }
};

// Contoh overloading
class ContohOverloading {
public:
    void cetak(int num) {
        cout << "Harga: " << num << endl;
    }

    void cetak(double num) {
        cout << "Tahunrilis: " << num << endl;
    }
};

// Contoh polimorfisme
void cetakharga(Mainan* mainan) {
    cout << "Harga: " << mainan->cekharga() << endl;
}

int main() {
    Mainanboneka mainanBoneka ("Pink", 50000, 2020, "");
    cout << "Warna: " << mainanBoneka.getwarna() << endl;
    cout << "Harga: " << mainanBoneka.getharga() << endl;
    cout << "Tahun Rilis: " << mainanBoneka.gettahunrilis() << endl;
    cout << "Bentuk: " << mainanBoneka.getbentuk() << endl;
    cetakharga(&mainanBoneka);

    Mainanmobil mainanMobil("Merah", 20000, 2023, "Tanggung");
    cout << "Warna: " << mainanMobil.getwarna() << endl;
    cout << "Harga: " << mainanMobil.getharga() << endl;
    cout << "Tahun Rilis: " << mainanMobil.gettahunrilis() << endl;
    cout << "Bentuk: " << mainanMobil.getbentuk() << endl;
    cetakharga(&mainanMobil);

    ContohOverloading contoh;
    contoh.cetak(50000);
    contoh.cetak(20000);

    return 0;
}