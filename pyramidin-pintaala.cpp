#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double pituus, leveys, korkeus;

    cout << "Anna pohjan pituus: ";
    cin >> pituus;

    cout << "Anna pohjan leveys: ";
    cin >> leveys;

    cout << "Anna pyramidin korkeus: ";
    cin >> korkeus;

    double perusala = pituus * leveys;

    double kaltevuuskorkeus = sqrt((pituus / 2) * (pituus / 2) + korkeus * korkeus);

    double keha = 2 * (pituus + leveys);

    double sivualue = 0.5 * keha * kaltevuuskorkeus;

    double pintaala = perusala + sivualue;

    double tilavuus = (1.0 / 3.0) * perusala * korkeus;

    cout << "Pyramidin tilavuus: " << tilavuus << endl;
    cout << "Pyramidin pinta-ala: " << pintaala << endl;

    return 0;
}
