#include <iostream>
#include <stdexcept> 
using namespace std;

class Tableau {
private:
    int* data;   
    int taille; 

public:
    Tableau(int taille) {
        this->taille = taille;
        data = new int[taille]; //alocation dynamique
        for (int i = 0; i < taille; ++i){
            data[i] = 0;
        
        }
    }

    ~Tableau() {
        delete[] data;
        cout << "Memoire liberee." << endl;
    }

   
    int& operator[](int index) {
        if (index < 0 || index >= taille){
            throw out_of_range("Index hors limites !");
        }
        return data[index];
    }

    void afficher() const {
        for (int i = 0; i < taille; ++i){
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
     try {
        Tableau t(5);
       
        t[0] = 10;
        t[1] = 20;
        t[2] = 30;
        t[3] = 40;
        t[4] = 50;

        cout << "Contenu du tableau : ";
        t.afficher();

        
        cout << t[5] << endl; 

    } catch (const exception& e) {
        cout << "Erreur : " << e.what() << endl;
    }


    return 0;
}
