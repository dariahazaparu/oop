//
// Created by Daria on 5/12/2020.
//

#ifndef TEMA_3_CONTRACTE_H
#define TEMA_3_CONTRACTE_H

#include "persoana.h"
#include <set>
#include <tuple>

class contracte {
    std :: set < std :: tuple < persoana*, std :: string, int > > mapa;
public:
    explicit contracte();
    void inserting (persoana* pers, int suma_standard);
    friend std :: ostream& operator << (std :: ostream& o, contracte& c);
    ~contracte();
};

#endif //TEMA_3_CONTRACTE_H
