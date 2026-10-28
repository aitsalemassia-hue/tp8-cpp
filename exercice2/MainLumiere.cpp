


#include <iostream>
#include <vector>
#include <memory>
#include "Lumiere.h"
#include "LumierePonctuelle.h"
#include "LumiereDirectionnelle.h"
#include "LumiereSpot.h"
float calculerEclairage(const std::vector<std::unique_ptr<Lumiere>>& lumieres,
                        const Vec3& point) {
    float total = 0.0f;
    for (const auto& l : lumieres)
        total += l->intensite(point);
    return total;
}

int main() {
    // Collection hétérogène
    std::vector<std::unique_ptr<Lumiere>> lumieres;

    lumieres.push_back(std::make_unique<LumiereDirectionnelle>(0.4f));
    lumieres.push_back(std::make_unique<LumierePonctuelle>(Vec3(0, 0, 0), 1.2f, 0.1f));
    lumieres.push_back(std::make_unique<LumiereSpot>(
        Vec3(5, 5, 5), Vec3(-1, -1, -1), 2.0f, 0.05f, 60.0f));

    // Points de test
    std::vector<Vec3> points = {
        Vec3(0, 0, 0),
        Vec3(1, 1, 1),
        Vec3(-2, 3, 1),
        Vec3(10, 10, 10),
    };

    for (const auto& p : points) {
        std::cout << "Point (" << p.x << ", " << p.y << ", " << p.z << ") -> "
                  << "eclairage = " << calculerEclairage(lumieres, p) << "\n";
    }

    return 0;   // les unique_ptr libèrent tout automatiquement
}
