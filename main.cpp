#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;
/* ---------------------------
Laboratoire : 02
Auteur(s) : Jeroshan Jegatheeswaran
Date : 23.09.2026
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */

int main() {
    const double dx = 3.0;                      // Distance x vers l'objet (km)
    const double dy = 10.0;                     // Distance y vers l'objet (km)
    //const double L1 = 6.0;                      // Distance parcourue sur la route (km)
    double L1;                                  // Déclaration de L1 pour une entrée utilisateur
    const double roadSpeed = 5.0;               // Vitesse sur la route (km/h)
    const double offroadSpeed = 2.0;            // Vitesse hors-route (km/h)
    cout << "Veuillez entrer une distance pour L1: ";
    cin >> L1;                                  //
    double less_dy = dy - L1;                   // Distance du reste de L1

    double L2 = sqrt(dx*dx + less_dy*less_dy);  // Distance de l'hypoténuse; dist. parcourue dans les rochers

    double roadTime =  L1 / roadSpeed;          // Temps passé sur la route
    double offroadTime =  L2 / offroadSpeed;    // Temps passé sur les rochers

    double totalTime = roadTime + offroadTime;  // Temps total du trajet jusqu'à la destination

    cout << "Voici le temps total: " << totalTime << "h"<< endl;

    return EXIT_SUCCESS;
}
