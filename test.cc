
#include<iostream>
using namespace std ;

class Etudiant {
private:
  char nom[15];
  char prenom[15];
  int rang, age, moyenne;
public:
  //constructeur :
  Etudiant (char n[15], char p[15], int r, int a, int m){
    nom = n;
    prenom = p;
    rang = r;
    age = a;
    moyenne = m;
  }

  //getter & setter :
  char[15] GetNom(){return nom;}
  void SetNom(char[15] s) { nom = s;}

  char[15] GetPrenom(){return prenom;}
  void SetPrenom(char[15] s) { prenom = s;}

  int GetAge(){return age;}
  void SetNom(int k) { age = k;}

  int GetRang(){return rang;}
  void SetNom(int k) { rang = k;}

  int GetMoyenne(){return moyenne;}
  void SetMoyenne(int k) { moyenne = k;}
};

int main() {
  printf("c:\n");
  return 0;
}
