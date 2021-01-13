#ifndef classe_hasard_H
#define classe_hasard_H
class hasard
{
 private :
  const int Nmax;
  const int Vmax;
  int *tableau_random;
 public :
  bool operator==(const hasard & h_) const;
  bool operator!=(const hasard & h_) const;
  hasard();
  hasard(const int Nmax_, const int Vmax_);
  ~hasard();
  int get_Nmax() const;
  int get_Vmax() const;
  /*void set_Nmax(int Nmax_);
    void set_Vmax(int Vmax_);*/
  void affiche() const;
  void affiche(const unsigned int i_) const;
};
#endif
  
  
  