/**
 * @file Individu.h
 * @author M.SEGOT (you@domain.com)
 * @brief .h de la classe Individu en relation reciproque avec sa voiture
 * @details ce fichier décrit une classe individu
 *
 * un Individu est défini par un nom, prenom et une Voiture
 * @version 1.0
 * @date 2022-10-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief Class representant un individu
 *@warning actuellement un individu conduit au plus une voiture
 @deprecated utiliser a la place la classe personne
 */
class Individu
{
  // ATTRIBUTS
public:
  /**
   * @brief Le nom de l'individu
   */
  string nom;
  /**
   * @brief Le prénom de l'individu
   */
  string prenom;
  /**
   * @brief Lien avec la voiture de l'individu
   */
  Voiture *maVoiture;

  // MÉTHODES
public:
/**
 * @brief construit un objet individu à partir de son nom et son prenom
 * 
 */
  // Constructeur
  Individu(string = "", string = "");
  // destructeur
  ~Individu();

  // Méthodes usuelles : toString
  /**
   * @brief Retourne identite de l'individu
   * @bug un espace en trop entre le nom et le prénom
   * @return retourne une chaine sous la forme "Nom Prenom" 
   * @todo ajouter un parametre pour choisir entre nom Prenom ou Prenom nom
   */
  string toString();        // Affiche l'identité de l'individu
  string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

  // Méthodes spécifiques
  void majMaVoiture(Voiture *voiture);
  /**
   * @brief Définis la voiture conduite par l'individu
   * 
   * @param (in) voiture un pointeur vers l'objet voiture conduit par l'individu
   */
  void setMaVoiture(Voiture *voiture);
  void supprimerLien();
};

#endif // INDIVIDU_H