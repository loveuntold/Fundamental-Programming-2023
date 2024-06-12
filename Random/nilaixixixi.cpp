#include <iostream>
#include <string>

int main() {
    int nilai;
    
    // Masukin Nilai
    std::cout << "Masukkan nilai: ";
    std::cin >> nilai;
    
    bool RangeA = nilai >= 86 && nilai <= 100;
    bool RangeAB = nilai >= 76 && nilai <= 85;
    bool RangeB = nilai >= 66 && nilai <= 75;
    bool RangeBC = nilai >= 61 && nilai <= 65;
    bool RangeC = nilai >= 56 && nilai <= 60;
    bool RangeD = nilai >= 41 && nilai <= 55;
    bool RangeE = nilai >= 0 && nilai <= 40;
    
    std::string nilaiHuruf = RangeA ? "A" :
                             (RangeAB ? "AB" :
                             (RangeB ? "B" :
                             (RangeBC ? "BC" :
                             (RangeC ? "C" :
                             (RangeD ? "D" :
                             (RangeE ? "E" : "Tidak valid"))))));
    
    std::cout << "Nilai Anda: " << nilaiHuruf << std::endl;
    
    return 0;
}
