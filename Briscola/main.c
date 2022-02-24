#include "Briscola.h"


int main() {
    Mazzo m;
    for (int i = 0; i < 40; i++) {
        m.mazzo[i].uscita = false; // All'inizio nessuna carta è ancora uscita
        if (i%10 == 0) {
            m.mazzo[i].carta = "Asso";
            m.mazzo[i].valore = 11;
        } else if (i%10 == 1) {
            m.mazzo[i].carta = "Due";
            m.mazzo[i].valore = 0; // Il 2 vale zero punti, giusto?
        } else if (i%10 == 2) {
            m.mazzo[i].carta = "Tre";
            // ...
        }
        // E così via...
        
        if (i%4 == 0)
            m.mazzo[i].seme = "Cuori";
        if (i%4 == 1)
            m.mazzo[i].seme = "Quadri";
        if (i%4 == 2)
            m.mazzo[i].seme = "Fiori";
        if (i%4 == 3)
            m.mazzo[i].seme = "Picche";
        // alla fine di questo for avrai assegnato le carte a tutto il mazzo, e avrai un mazzo ordinato
    }
}