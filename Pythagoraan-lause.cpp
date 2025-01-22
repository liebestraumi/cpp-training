#include <iostream>
#include <cmath>

int main() {
    double A, B, hypotenuusa;

    std::cout << "Syötä sivun A pituus: ";
    std::cin >> A;

    std::cout << "Syötä sivun B pituus: ";
    std::cin >> B;

    hypotenuusa = std::sqrt((A * A) + (B * B));

    std::cout << "Hypotenuusan pituus on: " << hypotenuusa << std::endl;

    return 0;
}
