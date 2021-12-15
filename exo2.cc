
#include<iostream>
#include<list>
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
  Etudiant (){
    nom = "";
    prenom = "";
    rang = 0;
    age = 0;
    moyenne = 0;
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

  void initetud() {
  char p[15];
  char n[15];
  int a;
  int r;
  int m;

  printf("Entrez le Prénom (15 char max) :\n");
  scanf("%s",p);
  printf("Entrez le Nom (15 char max) :\n");
  scanf("%s",n);
  printf("Entrez dans l'ordre : Age, Rang, Moyenne.(entrée après chaque nombre)\n");
  scanf("%i", &a);
  scanf("%i", &r);
  scanf("%i", &m);

  this->nom = n;
  this->prenom = p;
  this->rang = r;
  this->age = a;
  this->moyenne = m;
  }

  void affichetud()
  {
    cout<<" Nom: "<<this->nom<<", Prenom: "<<this->prenom<<", Age: "<<this->age
    <<", Rang: "<<this->rang<<", Moyenne: "<<this->moyenne<<endl;
  }

};

int main() {
  int l = 10;
  Etudiant Letudiant[10];

  for (int i = 0; i< l; i++) {//recupere liste etudiant de taille l
    printf("Etuditan n° %d \n",i+1 );
    Letudiant[i].initetud();
  }

  for (int i = 0; i < l; i++) {// affiche liste etudiant de taille l
    printf("Etuditan n° %d \n",i+1 );
    Letudiant[i].affichetud();
  }
}
