#include <iostream>

int main() {
    float suhuHarian[] = { 25.5, 27.0, 26.3, 28.1, 25.9, 26.8, 27.5 };

    for (int i = 0; i < 7; i++) {
        std::cout << "Suhu Hari ini ke-" << i << ": " << suhuHarian[i] << std::endl;
    };

    return 0;
}