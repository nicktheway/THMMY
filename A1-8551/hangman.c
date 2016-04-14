/**
 * hangman.c 
 * Περιέχει την συνάρτηση hangman(n) η οποία σχεδιάζει το σχέδιο της κρεμάλας
 * με βάση των αριθμό (n) των λαθών.
 * Νίκος Κατωμέρης, 8551
 * 09/10/2015
 */

#include <stdio.h>

void hangman(int n) {
    char head, hand1, hand2, body, leg1, leg2;
    head = hand1 = hand2 = body = leg1 = leg2 = ' ';
    switch (n){
        case 6: leg2 = '\\';
        case 5: leg1 = '/';
        case 4: hand2 = '\\';
        case 3: hand1 = '/';
        case 2: body = '|';
        case 1: head = 'O';
        default:
        {
            printf("++----\n|    |\n|    %c\n|   %c%c%c\n|    %c\n|   %c %c\n|\n", head, hand1, body, hand2, body, leg1, leg2);
        }
    }
}
