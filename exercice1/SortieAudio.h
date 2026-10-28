#ifndef EXERCICE1_SORTIEAUDIO_H_
#define EXERCICE1_SORTIEAUDIO_H_

#include <string>

class SortieAudio {
public:
    virtual void ouvrir() = 0;
    virtual void jouer(const std::string& son) = 0;
    virtual void fermer() = 0;

    virtual ~SortieAudio() {}
};

#endif /* EXERCICE1_SORTIEAUDIO_H_ */
