#ifndef EXERCICE1_CASQUEBT_H_
#define EXERCICE1_CASQUEBT_H_

#include "SortieAudio.h"

class CasqueBT : public SortieAudio {
public:
    CasqueBT();
    ~CasqueBT() override;

    void ouvrir() override;
    void jouer(const std::string& son) override;
    void fermer() override;
};

#endif /* EXERCICE1_CASQUEBT_H_ */
