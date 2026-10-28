#ifndef EXERCICE1_HAUTPARLEUR_H_
#define EXERCICE1_HAUTPARLEUR_H_

#include "SortieAudio.h"

class HautParleur : public SortieAudio {
public:
    HautParleur();
    ~HautParleur() override;

    void ouvrir() override;
    void jouer(const std::string& son) override;
    void fermer() override;
};

#endif /* EXERCICE1_HAUTPARLEUR_H_ */
