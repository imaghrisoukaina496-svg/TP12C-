#include <iostream>
using namespace std;

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    Date(int j = 1, int m = 1, int a = 2000) {
        jour = j;
        mois = m;
        annee = a;
    }

    bool operator==(const Date& other) const {
        return (jour == other.jour && mois == other.mois && annee == other.annee);
    }

    bool operator!=(const Date& other) const {
        return !(*this == other); 
    }

    void afficher() const {
        cout << jour << "/" << mois << "/" << annee << endl;
    }
};

int main() {
    Date d1(31, 10, 2025);
    Date d2(31, 10, 2025);
    Date d3(1, 11, 2025);

    cout << "Date 1 : ";
    d1.afficher();
    cout << "Date 2 : ";
    d2.afficher();
    cout << "Date 3 : ";
    d3.afficher();

    if (d1 == d2)
        cout << "d1 et d2 sont identiques." << endl;
    else
        cout << "d1 et d2 sont differentes." << endl;

    if (d1 != d3)
        cout << "d1 et d3 sont differentes." << endl;
    else
        cout << "d1 et d3 sont identiques." << endl;

    return 0;
}
