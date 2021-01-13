#include<iostream>
#include<ostream>
#include<cstdlib>
#include"complexe_alea_uni.h"
using namespace std;
complexe_alea_uni::complexe_alea_uni(double v)
: complexe_alea()
{
  p_v = v;
}
complexe_alea_uni::~complexe_alea_uni()
{
}
void complexe_alea_uni::set_lim(double v)
{
  p_v = v;
}
double complexe_alea_uni::get_lim() const
{
  return p_v;
}
  void complexe_alea_uni::initialise()
{
  srand(graine());
}
complexe complexe_alea_uni::valeur() const
{
  complexe nb;
  nb.re((double(rand())/double(RAND_MAX)-0.5)*2.0*p_v);
  nb.im((double(rand())/double(RAND_MAX)-0.5)*2.0*p_v);
  return nb;
}
  
  