#include <stdio.h>
#include <stdlib.h>

// indirizzo
void modifica_mediante_puntatore(int* numero_intero_puntato_mediante_indirizzo){
  *numero_intero_puntato_mediante_indirizzo += 10;
}

// copia
void modifica_impossibile_senza_puntatore(int numero_intero_puntato_mediante_copia_locale_interna){
  numero_intero_puntato_mediante_copia_locale_interna += 10;
}

// mostra per dimostrare regole specifiche di funzionamento
void mostra_valore_numerico_contenuto_in_variabile(int variabile_numerica_interi){
  printf("numero intero: %d\n", variabile_numerica_interi);
}

int main()
{
    printf("inizio: lezione puntatori!\n");

    int numero_1 = 0, numero_2 = 0;

    puts("con uso di puntatore (modifica possibile)");
    mostra_valore_numerico_contenuto_in_variabile(numero_1);
    modifica_mediante_puntatore(&numero_1);
    mostra_valore_numerico_contenuto_in_variabile(numero_1);

    puts("senza uso di puntatore (modifica impossibile)");
    mostra_valore_numerico_contenuto_in_variabile(numero_2);
    modifica_impossibile_senza_puntatore(numero_2);
    mostra_valore_numerico_contenuto_in_variabile(numero_2);

}
