#include <iostream>
#include "SortieAudio.h"
#include "HautParleur.h"
#include "CasqueBT.h"
#include "SortieHDMI.h"

void tester(SortieAudio* s) {
    s->ouvrir();
    s->jouer("musique.mp3");
    s->fermer();
}

int main() {
    const int N = 3;
    SortieAudio* sorties[N];


    sorties[0] = new HautParleur();
    sorties[1] = new CasqueBT();
    sorties[2] = new SortieHDMI();

    for (int i = 0; i < N; i++) {
        tester(sorties[i]);

    }


    for (int i = 0; i < N; i++) {
        delete sorties[i];
    }

    return 0;
}



