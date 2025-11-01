#include <iostream>
using namespace std;

class Vecteur2D {
private:
    float x;
    float y;

public:
    Vecteur2D(float x, float y) : x(x), y(y) {}

    Vecteur2D operator+(const Vecteur2D& other) {
        return Vecteur2D(x + other.x, y + other.y);
    }

     void afficher() const {
        cout << "(" << x << ", " << y << ")" << endl;
     }
};

int main() {
    Vecteur2D v1(2.5, 3.0);
    Vecteur2D v2(1.5, 4.5);

    cout << "Vecteur 1 : ";
    v1.afficher();

    cout << "Vecteur 2 : ";
    v2.afficher();

    Vecteur2D v3 = v1 + v2;

    cout << "Resultat de v1 + v2 : ";
    v3.afficher();

    return 0;
}
