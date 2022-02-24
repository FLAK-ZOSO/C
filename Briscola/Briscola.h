#include <stdio.h>


// Tiene le informazioni della singola mano, una partita sarà creata da un numero scelto di mani, mi sembra troppo difficile tenere conto delle carte ancora da giocare, anche se si può fare con un array di 40 caratteri... decidete voi
struct Mano {
    std::string seme_iniziale; // Il seme che è stato giocato per prima nella mano
    std::string briscola; // Seme di briscola della partita corrente
    Carta carte_giocate[6];
    Carta carte_del_giocatore[3]; // Carte che l'utente ha ancora in mano
    Carta carte_del_computer[3]; // Carte che ha "in mano" il computer
    bool giocatore; // Quale giocatore ha giocato per primo in questa mano? True se è il computer, False se è l'umano.
};


struct Carta {
    std::string carta; // Ad esempio "Asso", ma forse è meglio assegnare dei valori numerici per capire rapidamente quale carta è più alta
    int valore; // Quanto vale la carta, tipo il 3 vale 10, giusto?
    std::string seme; // Il seme della carta, si può fare anche int, si veda il commento della riga sopra
    bool uscita; // La carta è già uscita?
};


struct Mazzo {
    Carta mazzo[40]; // L'array conterrà tutte le carte di un tradizionale mazzo
};
