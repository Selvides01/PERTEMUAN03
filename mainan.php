<?php
// Kelas dasar
class Mainan {
    protected $warna;
    protected $harga;
    protected $tahunrilis;
    protected $bentuk;
    
    // Constructor
    public function __construct($warna, $harga, $tahunrilis, $bentuk) {
        $this->warna = $warna;
        $this->harga = $harga;
        $this->tahunrilis = $tahunrilis;
        $this->bentuk = $bentuk;
    }

    public function getWarna() {
        return $this->warna;
    }

    public function getHarga() {
        return $this->harga;
    }

    public function getTahunRilis() {
        return $this->tahunrilis;
    }

    public function getBentuk() {
        return $this->bentuk;
    }

    public function cekHarga() {
        return 0.0;
    }

    // Destructor
    public function __destruct() {
        echo "Tampilkan objek Mainan" . PHP_EOL;
    }
}

// Kelas turunan
class MainanBoneka extends Mainan {
    // Constructor
    public function __construct($warna, $harga, $tahunrilis, $bentuk) {
        parent::__construct($warna, $harga, $tahunrilis, $bentuk);
    }

    // Destructor
    public function __destruct() {
        echo "Tampilkan objek MainanBoneka" . PHP_EOL;
    }
}

// Kelas turunan lainnya
class MainanMobil extends Mainan {
    // Constructor
    public function __construct($warna, $harga, $tahunrilis, $bentuk) {
        parent::__construct($warna, $harga, $tahunrilis, $bentuk);
    }

    // Destructor
    public function __destruct() {
        echo "Tampilkan objek MainanMobil" . PHP_EOL;
    }
}

// Contoh overloading
class ContohOverloading {
    public function cetak($num) {
        echo "Harga: " . $num . PHP_EOL;
    }

    public function cetakDouble($num) {
        echo "Tahunrilis: " . $num . PHP_EOL;
    }
}

// Contoh polimorfisme
function cetakHarga(Mainan $mainan) {
    echo "Harga: " . $mainan->cekHarga() . PHP_EOL;
}

$mainanBoneka = new MainanBoneka("Pink", 50000, 2020, "");
echo "Warna: " . $mainanBoneka->getWarna() . PHP_EOL;
echo "Harga: " . $mainanBoneka->getHarga() . PHP_EOL;
echo "Tahun Rilis: " . $mainanBoneka->getTahunRilis() . PHP_EOL;
echo "Bentuk: " . $mainanBoneka->getBentuk() . PHP_EOL;
cetakHarga($mainanBoneka);

$mainanMobil = new MainanMobil("Merah", 20000, 2023, "Tanggung");
echo "Warna: " . $mainanMobil->getWarna() . PHP_EOL;
echo "Harga: " . $mainanMobil->getHarga() . PHP_EOL;
echo "Tahun Rilis: " . $mainanMobil->getTahunRilis() . PHP_EOL;
echo "Bentuk: " . $mainanMobil->getBentuk() . PHP_EOL;
cetakHarga($mainanMobil);

$contoh = new ContohOverloading();
$contoh->cetak(50000);
$contoh->cetakDouble(20000);
?>