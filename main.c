#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "chiffrement.h"

  char  msg[200], textecrypte[200], msgcrypte[200], texte_code[200], cle[200];
  int choixalgo, i, retourScanf, cleph;
  puts("Choisissez un algorithme");
  puts("1: Chiffrer César");
  puts("2: Déchiffrer César");
  puts("3: Chiffrer Vigenère");
  puts("4: Déchiffrer Vigenere");
  puts("5: QUITTER");
  
  while (choixalgo  < 1 || choixalgo > 5){ 
    retourScanf = scanf("%d", &choixalgo);
    while (choixalgo != 5){
    while (choixalgo  < 1 || choixalgo > 5) {
      puts("choix invalide");
    } 
    if (retourScanf != 1) {
      puts("Choix invalide");
      while ((getchar()) != '\n'); //nettoyer le buffer de scanf
    }
  
  
  
  if (choixalgo == 1) {
    puts("écrivez le message à  crypter");
    scanf("%s", msg);

    puts("choissisez votre clé de césar (c'est un nombre)");
    scanf("%d", cleph);
    cesarch(msg, cleph); //met les variable
    puts (msg);
    }

  if (choixalgo == 2) {
    puts("écrivez le message à  decrypter");
    scanf("%s", msg);
    puts("choissisez votre clé de césar (c'est un chiffre ou un nombre)");
    scanf("%s", cleph);
    cesardech( msg, cleph); //met les variable
    puts(msg);
    }
    
    puts("Choisissez un algorithme");
    puts("1: Chiffrer César");
    puts("2: Déchiffrer César");
    puts("3: Chiffrer Vigenère");
    puts("4: Déchiffrer Vigenere");
    puts("5: QUITTER");
    retourScanf = scanf("%d", &choixalgo);
    }

  if (choixalgo == 3) {
    puts("écrivez le message à  crypter");
    scanf("%s", msg);

    puts("choissisez votre clé de vigenere (c'est une phrase)");
    scanf("%s", cle);
    
    vigenerech( msg, cle, textecrypte); //met les variable
    puts(textecrypte); 
     puts("Choisissez un algorithme");
    puts("1: Chiffrer César");
    puts("2: Déchiffrer César");
    puts("3: Chiffrer Vigenère");
    puts("4: Déchiffrer Vigenere");
    puts("5: QUITTER");
    retourScanf = scanf("%d", &choixalgo);   
    }

    if (choixalgo == 4) {
   
    puts("écrivez le message à  decrypter");
    scanf("%s", msg);
    puts("choissisez votre clé de vigenere (c'est une phrase)");
    scanf("%s", cle);
    vigeneredech( msg, cle, textecrypte ); //met les variable
    puts(textecrypte);
    }
    puts("Choisissez un algorithme");
    puts("1: Chiffrer César");
    puts("2: Déchiffrer César");
    puts("3: Chiffrer Vigenère");
    puts("4: Déchiffrer Vigenere");
    puts("5: QUITTER");
    retourScanf = scanf("%d", &choixalgo);
  }

    if (choixalgo == 5) {
    exit(0); //QUITTER
    puts("aurevoir");
  }
  
  
