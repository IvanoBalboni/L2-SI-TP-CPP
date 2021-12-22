#include<iostream>
using namespace std ;

class Temps
{
  private :
  int secondes, minutes, heures, jours;
  public :
  Temps() {secondes = 0; minutes = 0; heures = 0; jours = 0;}
  Temps(int s) {secondes = s % 60; minutes = (s / 60) % 60;
              heures = (s / 3600) % 24; jours = s / 86400;}
  Temps(int s, int m) {secondes = s % 60; minutes = (m + s / 60) % 60;
     heures = (m/60 + s/3600) % 24; jours = (m/1440 + s/86400);}
  Temps(int s, int m, int h) {secondes = s % 60; minutes = (m + s / 60) % 60;
     heures = (h + m/60 + s/3600) % 24; jours = (h/24 + m/1440 + s/86400);}
  Temps(int s, int m, int h, int j) {secondes = s % 60; minutes = (m + s / 60) % 60;
     heures = (h + m/60 + s/3600) % 24; jours = (j + h/24 + m/1440 + s/86400);}

  int GetSecondes(){return secondes;}
  void SetSecondes(int i){if(i < 60 && i > -60){secondes = i;}
                        else{printf("La valeur n'a pas pu être modifiée.");}}

  int GetMinutes(){return minutes;}
  void SetMinutes(int i){if(i < 60 && i > -60){minutes = i;}
                        else{printf("La valeur n'a pas pu être modifiée.");}}

  int GetHeures(){return heures;}
  void SetHeures(int i){if(i < 24 && i > -24){heures = i;}
                        else{printf("La valeur n'a pas pu être modifiée.");}}

  int GetJours(){return jours;}
  void SetJours(int i){jours = i;}


  void afficher(){
    {cout<<"Secondes = "<<secondes<<", Minutes = "<<minutes
            <<", Heures = "<<heures<<", Jours = "<<jours<<endl;}
  }

  bool operator==(const Temps& b){
    return(secondes == b.secondes && minutes == b.minutes &&
            heures == b.heures && jours == b.jours);
  }

  int ToSeconds() const{
    return secondes + 60 * minutes + 3600 * heures + 86400 * jours;
  }

  Temps operator+(const Temps& b){
    int s = ToSeconds() + b.ToSeconds();
    Temps t(s);
    return t;
  }

  Temps operator-(const Temps& b){
    int s = ToSeconds() - b.ToSeconds();
    Temps t(s);
    return t;
  }
};


int main() {
  //Tests constructeurs
  printf("Début test constructeurs :\n");
  Temps a;//Secondes = 0, Minutes = 0, Heures = 0, Jours = 0
  Temps b(130);//Secondes = 10, Minutes = 2, Heures = 0, Jours = 0
  Temps c(130,62);//Secondes = 10, Minutes = 4, Heures = 1, Jours = 0
  Temps d(3972,69,22);//Secondes = 12, Minutes = 15, Heures = 0, Jours = 0
  Temps e(43972,469,27,3);//Secondes = 52, Minutes = 1, Heures = 22, Jours = 4
  a.afficher();
  b.afficher();
  c.afficher();
  d.afficher();
  e.afficher();
  //Fin tests constructeurs

  //Test surchage opérateurs
  printf("Début test surchage opérateurs :\n");
  Temps f = d + e;
  Temps g = d - e;//
  Temps h = e - d;//attend -g
  Temps i = h + g;// attend 0

  f.afficher();
  g.afficher();
  h.afficher();
  i.afficher();
  if (h == h) { printf("h == h\n");}
  if (h == a) { printf("h == a\n");}
  if (a == b) {printf("ERREUR ==\n");}
  //Fin test surchage opérateurs
}
