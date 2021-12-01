
#include<iostream>
using namespace std ;

class Etudiant {
private:
  string nom;
  string prenom;
  int rang, age, moyenne;
public:
  //constructeur :
  Etudiant (string n, string p, int r, int a, int m){
    nom = n;
    prenom = p;
    rang = r;
    age = a;
    moyenne = m;
  }

  //getter & setter :
  string GetNom(){return nom;}
  void SetNom(string s) { nom = s;}

  string GetPrenom(){return prenom;}
  void SetPrenom(string s) { prenom = s;}

  int GetAge(){return age;}
  void SetNom(int k) { age = k;}

  int GetRang(){return rang;}
  void SetRang(int k) { rang = k;}

  int GetMoyenne(){return moyenne;}
  void SetMoyenne(int k) { moyenne = k;}
};

int main() {
  printf("c:\n");
  return 0;
}
