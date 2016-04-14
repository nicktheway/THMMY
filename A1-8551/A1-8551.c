/**
 * A1-8551.c 
 * Προγραμματιστικές τεχνικές, 1η εργασία
 * Κύριο πρόγραμμα
 * Νικόλαος Κατωμέρης, 8551
 * 09/10/2015
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "hangman.h"

int main(void){
    int i, j, n, flag, fl_used, wordLength;
    char word[21], *visibleWord, letter, usedLetters[10];
    
    //Προτροπή του πρώτου χρήστη για εισαγωγή λέξης
    printf("Enter the secret word: ");
    scanf("%s", word);
    
    //Εισαγωγή αρχικών τιμών στις μεταβλητές
    wordLength = strlen(word);
    n = j = 0;
    visibleWord = (char *) malloc((wordLength + 1) * sizeof(char));
    for (i = 0; i < wordLength; i++){
        visibleWord[i] = '*';
    }
    visibleWord[wordLength] = '\0';
    
    //Δομή επανάληψης κάθε γύρου παιχνιδιού
    while(1){
        for (i = 0; i < 25; i++) printf("\n");
        hangman(n);
        //Ελέγχει αν ο παίκτης έχει χάσει το παιχνίδι
        if (n == 6){
            flag = 0;
            break;
        }
        //Ελέγχει αν ο παίκτης έχει νικήσει το παιχνίδι
        if (!strcmp(word, visibleWord)){
            flag = 1;
            break;
        }
        
        flag  = 0;
        printf("\nHidden word: %s\n", visibleWord);
        printf("Guess a letter: ");
        while (1){
            scanf("%c", &letter);
            if (letter == ' ' || letter == '\n') continue;
            if (!isalpha(letter)){
                printf("That isn't a letter, try again: ");
                continue;
            }
            else break;
        }
        for (i = 0; i < wordLength; i++){
            if (letter == word[i] || letter == word[i] + ('a'-'A') || letter == word[i] - ('a'-'A')){
                visibleWord[i] = word[i];
                flag = 1;
            }
        }
        
        for (fl_used = 0, i = 0; i < j; i++){
            if (letter == usedLetters[i] || letter == usedLetters[i] + ('a'-'A') || letter == usedLetters[i] - ('a'-'A')){
                fl_used = 1;
            }
        }
        if (fl_used){
            printf("That letter has already been used, try again: \n");
            continue;
        }
        if (!flag){
            printf("Wrong...\n");
            n++;
        }
        else printf("Bravo!\n");
        usedLetters[j++] = letter;
    }
    if (flag){
        printf("Congratulations you guessed the secret world: %s\n", word);
    }
    else{
        printf("You lost...\nThe secret word was: %s\n", word);
    }
    return 0;
}
