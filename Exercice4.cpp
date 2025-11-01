#include <iostream>
#include <string>
using namespace std;

class Produit {
private:
    string nom;
    double prix;
    int quantite;

public:
    Produit(string n, double p, int q) : nom(n), prix(p), quantite(q) {}

    friend ostream& operator<<(ostream& os, const Produit& p);
};

ostream& operator<<(ostream& os, const Produit& p) {
    os << "Produit : " << p.nom
       << " | Prix : " << p.prix << " €"
       << " | Quantite : " << p.quantite;
    return os; 
}

int main() {
    Produit p1("Ordinateur", 750.99, 3);
    Produit p2("Souris", 19.99, 10);

    cout << p1 << endl;
    cout << p2 << endl;

    return 0;
}
