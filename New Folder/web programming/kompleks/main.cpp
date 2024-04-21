#include <iostream>

class Kompleks {
private:
    double re, im;

public:
    // Konstruktor default
    Kompleks() {
        std::cout << "Konstruktor Kompleks dijalankan...." << std::endl;
        re = 5.2;
        im = 3.6;
    }

    // Konstruktor dengan parameter
    Kompleks(double real, double imajiner) {
        std::cout << "Konstruktor Kompleks dijalankan...." << std::endl;
        re = real;
        im = imajiner;
    }

    // Method untuk menampilkan informasi bilangan kompleks
    void info() {
        std::cout << "\nBilangan kompleks : " << std::endl;
        std::cout << "real = " << re << std::endl;
        std::cout << "imajiner = " << im << std::endl;
        std::cout << std::endl;
    }
};  

int main() {
    // Membuat objek Kompleks
    Kompleks a;
    // Menampilkan informasi objek a
    a.info();

    // Membuat objek Kompleks dengan konstruktor berparameter
    Kompleks b(3.2, 4.1);
    // Menampilkan informasi objek b
    b.info();

    return 0;
}
