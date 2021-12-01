
#include<iostream>
using namespace std ;

class Complexe
{
  private :
  double re, im ;
  public :

  Complexe() {re = 0; im = 0;}
  Complexe(double r) {re = r; im = 0;}
  Complexe(double r, double i) {re = r; im = i;}

  double GetReel(){return re;}
  void SetReel(double i){re = i;}

  double GetImaginaire(){return im;}
  void SetImaginaire(double i){im = i;}

  void afficher(){
    if (im >= 0){cout<<re<<" + "<<im<<"i"<<endl;}
    else {cout<<re<<" - "<<im<<"i"<<endl;}
  }

  Complexe operator+(const Complexe& b){
    Complexe c;
    c.re = re + b.re;
    c.im = im + b.im;
    return c;
  }
  Complexe operator-(const Complexe& b){
    Complexe c;
    c.re = re - b.re;
    c.im = im - b.im;
    return c;
  }

  bool operator==(const Complexe& b){
    return (re == b.re && im == b.im);
  }

};
int main()
{
  Complexe x;
  Complexe y(1);
  Complexe z(1,2);
  x.afficher();
  y.afficher();
  z.afficher();

  (z + y).afficher(); // 1 + (1 + 2i)
  (z - y).afficher(); // 1 - (1 + 2i)
  if (!(x == x)) {printf("ERREUR==\n");}
  if (!(y == x)) {printf("a\n");}
  if (x == x) {printf("b\n");}
  if (y == x) {printf("ERREUR==\n");}
  return 0;
}
