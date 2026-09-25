/* ---------------------------
Laboratoire : 02
Auteur(s) : Jeroshan Jegatheeswaran
Date : 23.09.2026
But : Calcul du temps de trajet
Remarque(s) :
--------------------------- */

#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    // Déclaration des variables que l'utilisateur pourra choisir (en km)

    double dx;
    double dy;
    double L1;

    // Vitesses fixes de voyage sur les différentes surfaces
    const double s1 = 5.0;               // Vitesse sur la route (km/h)
    const double s2 = 2.0;            // Vitesse hors-route (km/h)

    // L'utilisateur va entrer ses propres données pour les trois distances (dx,dy,L1) en km

    cout << "Veuillez entrer une distance (en km) pour dx: ";
    cin >> dx;                                  // Entree utilisateur pour dx

    cout << "Veuillez entrer une distance (en km) pour dy: ";
    cin >> dy;                                  // Entree utilisateur pour dy

    cout << "Veuillez entrer une distance (en km) pour L1: ";
    cin >> L1;                                  // Entree utilisateur pour L1


    double less_dy = dy - L1;                   // Distance du reste de L1

    double L2 = sqrt(dx*dx + less_dy*less_dy);  // Distance de l'hypoténuse calculée avec théorème de pythagore
                                                //dist. parcourue dans les rochers

    double roadTime =  L1 / s1;          // Temps passé sur la route
    double offroadTime =  L2 / s2;       // Temps passé sur les rochers

    double totalTime = roadTime + offroadTime;  // Temps total du trajet jusqu'à la destination

    // Affichage final du temps en heure
    cout << totalTime << endl;

    return EXIT_SUCCESS;
}
//"Voici le temps total: "