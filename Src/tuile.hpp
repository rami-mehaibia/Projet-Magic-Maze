#ifndef TUILE_HPP
#define TUILE_HPP

#include <iostream>
#include <vector>
#include <map>

#include "couleurs.hpp"
#include "case.hpp"

using namespace std;

class tuile 
{
   private :
        bool type ;  
   public : 
        tuile() ;
        ~tuile() ;
        map <MMaze::Couleur, int> portes;
        map <MMaze::Couleur, int> objectifs;
        map <MMaze::Couleur, int> sorties;

};

#endif
