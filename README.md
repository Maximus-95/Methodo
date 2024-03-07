# Controle Méthodologie de programmation                                                                           # ARSLAN Osman              ## 07/03/2024

# BLACK JACK

-DEBUT Black Jack
 - VAR TABLEAU Carte[]
  - VAR ENTIER TABLEAU Carte[0] <- TABLEAU cartesPiques <- (1,2,3,4,5,6,7,8,9,J,Q,K)
  - VAR ENTIER TABLEAU Carte[1] <- TABLEAU cartesCarreaux <- (1,2,3,4,5,6,7,8,9,J,Q,K)
  - VAR ENTIER TABLEAU Carte[2] <- TABLEAU cartesCoeurs <- (1,2,3,4,5,6,7,8,9,J,Q,K)
  - VAR ENTIER TABLEAU Carte[3] <- TABLEAU cartesTrèfles <- (1,2,3,4,5,6,7,8,9,J,Q,K)

  -STRUCTURE Joueur
    -VAR ENTIER numeroCartes
    -VAR CHAINE formatCartes
  -FIN STRUCUTRE Joueur

  -DEBUT CREATION Joueur
    -VAR ENTIER numeroCarte
    -VAR CHAINE formatCarte
  -FIN CREATION Joueur

  -DEBUT CREATION Croupier
    -VAR ENTIER numeroCarte
    -VAR CHAINE formatCarte
  -FIN CREATION Joueur

  -VAR CHAINE statutJeu <- continuer
  -VAR CHAINE resultatJoueur
  -VAR CHAINE resultatCroupuier
  -VAR CHAINE demandeCarteUtilisateur
  -VAR CHAINE demandeCarteCroupier
  -VAR CHAINE choixUtilisateur
  -VAR CHAINE choixCroupier
  -VAR CHAINE resultatFinal
  -VAR TABLEAU cartesDistribueJoueur[2]
  -VAR TABLEAU cartesDistribueCroupier[2]

  -DEBUT FONCTION distributionCartesJoueur
    -VAR TABLEAU cartesDistribueJoueur[0] <- CHOIX cartes PARMI TABLEAU cartes
    -VAR TABLEAU cartesDistribueJoueur[1] <- CHOIX cartes PARMI TABLEAU cartes.numero
    -retourne cartesDistribueJoueur
  -FIN FONCTION distributionCartesJoueur

  -VAR TABLEAU carteJoueur <- distributionCartesJoueur()
  -VAR TABLEAU carteCroupier <- distributionCartesCroupier()

  -DEBUT FONCTION distributionCartesCroupier
    -VAR TABLEAU cartesDistribueCroupier[0] <- CHOIX cartes PARMI TABLEAU cartes
    -VAR TABLEAU cartesDistribueCroupier[1] <- CHOIX cartes PARMI TABLEAU cartes.numero
    -retourne cartesDistribueCroupier
  -FIN FONCTION Distribution cartesCroupier

 -TANT QUE StatutJeu = continuer FAIRE
   -Joueur.formatCarte <- cartesDistribue[0]
   -Joeur.numeroCarte <- cartesDistribue[1]
   -Croupier.formatCarte <- cartesDistribueCroupier[0]
   -Croupier.numeroCarte <- cartesDistribueCroupier[0]

   -SI Croupier.numeroCarte >= 17 ET Croupier.numeroCarte <=21
     -demandeCarteCroupier = non
   -FIN SI
   -SINON
     -demandeCarteCroupier = oui
   -FIN SINON

   -SI Joueur.numeroCarte > 21
     -choixUtilisateur <- Saisie Utilisateur
     -damandeCarteUtilisateur <- ChoixUtilisateur
   -FI SI

   -resultatJoueur <- Joueur.numeroCarte - 21
   -resultatCroupier <- Croupier.numero carte - 21

   -SI resultatJoueur < resultatCroupier
       -resultatFinal <- JoueurWIN
   -FIN SI
   -SINON
     -resultatFinal <- CroupierWIN
   -FIN SINON
   
   
   
  
    
