#ifndef EXERCICE1_SORTIEHDMI_H_
#define EXERCICE1_SORTIEHDMI_H_

#include "SortieAudio.h"

class SortieHDMI : public SortieAudio {
public:
    SortieHDMI();
    ~SortieHDMI() override;

    void ouvrir() override;
    void jouer(const std::string& son) override;
    void fermer() override;
};

#endif /* EXERCICE1_SORTIEHDMI_H_ */
