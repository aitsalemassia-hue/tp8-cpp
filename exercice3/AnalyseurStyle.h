

#ifndef EXERCICE3_ANALYSEURSTYLE_H_
#define EXERCICE3_ANALYSEURSTYLE_H_

#pragma once
#include "Plugin.h"

class AnalyseurStyle : public Plugin {
public:
    std::string nom() const override;
    std::string traiter(const std::string& texte) override;
};

#endif /* EXERCICE3_ANALYSEURSTYLE_H_ */
