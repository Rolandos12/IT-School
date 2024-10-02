
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
//#include "Enemys.h"
//#include "Player.h"

using namespace std;


// am creeat clasa inamicului standard
class Gladiator
{
public:
    Gladiator() : HP(100), ARMOR(80)
    {
        {
            srand(static_cast<unsigned int>(time(0)));  // generator de numere aleatorii??
        }
    }

    int Dmg_given()
    {
        vector<int> dmg_value;
        for (int i = 20; i <= 45; ++i)
        {
            dmg_value.push_back(i);

        }
        int random_index = rand() % dmg_value.size();
        return dmg_value[random_index];
    }

    void TakeDamage(int damage) {
        HP -= damage;
        if (HP < 0) HP = 0;
    }

    bool IsAlive() const {
        return HP > 0;
    }

    int GetHP() const {
        return HP;
    }


private:
    int HP;
    int ARMOR;

};

// am creeat clasa a unui inamic ce ne loveste de la distanta

class RangeMan
{
public:
    RangeMan() : HP(100), ARMOR(60)
    {
        {
            srand(static_cast<unsigned int>(time(0)));  // generator de numere aleatorii??
        }
    }

    int Dmg_given()
    {
        vector<int> dmg_value;
        for (int i = 33; i <= 40; ++i)
        {
            dmg_value.push_back(i);

        }
        int random_index = rand() % dmg_value.size();
        return dmg_value[random_index];
    }

    void TakeDamage(int damage) {
        HP -= damage;
        if (HP < 0) HP = 0;
    }

    bool IsAlive() const {
        return HP > 0;
    }

    int GetHP() const {
        return HP;
    }

private:
    int HP;
    int ARMOR;

};

// am creeat clasa pentru obiectul ce ne reface HP-ul
class HealItem {
public:
    HealItem(int healingAmount) : healingAmount_(healingAmount) {}

    int getHealingAmount() const {
        return healingAmount_;
    }

private:
    int healingAmount_;

};

// am creat clasa player - jucatorul
class Player {
public:
    Player() : hp(100), dmg(30), maxHp(100), numarMere(2) {}

    int Dmg_given()
    {
        vector<int> dmg_value;
        for (int i = 35; i <= 42; ++i)
        {
            dmg_value.push_back(i);

        }
        int random_index = rand() % dmg_value.size();
        return dmg_value[random_index];
    }

    void equipBow() {
        hasBow = true;
    }

    int Dmg_givenBow() {
        if (hasBow) {
            vector<int> dmg_value;
            for (int i = 46; i <= 61; ++i)
            {
                dmg_value.push_back(i);

            }
            int random_index = rand() % dmg_value.size();
            return dmg_value[random_index];
        }
        else {
            // Calculează daunele normale
            return baseDamage;
        }
    }

    void TakeDamage(int damage) {
        hp -= damage;
        if (hp < 0) hp = 0;
        damageTaken = damage;
    }

    bool IsAlive() const {
        return hp > 0;
    }

    int GetHP() const {
        return hp;
    }
    int getMaxHp() const {
        return maxHp;
    }


    int numarMere; // Numarul de mere din inventar
    void heal() {

        int healingAmount = 35; 
        int maxHealing = 100 - hp; 
        int actualHealing = std::min(healingAmount, maxHealing);

        if (numarMere > 0 && hp < maxHp) {
            numarMere--;
            hp += 35;
            if (hp > maxHp) {
                hp = maxHp;
            }
            cout << "You ate an apple. Your HP is now: " << hp << endl;
        }
        else if (numarMere == 0) {
            cout << "You're out of apples!" << endl;
        }
        else {
            cout << "Your HP is already maxed out!" << endl;
        }
    }

private:
    int hp;
    int dmg;
    int maxHp;
   // int numarMere;
    int damageTaken;
    bool hasBow;
    int baseDamage;
};



 //sistem de afisare a vietii
void displayHealthBar(int currentHp, int maxHp) {
    int healthBarLength = 20; // Lungimea barei de viata
    float healthPercentage = static_cast<float>(currentHp) / maxHp;
    int filledBars = static_cast<int>(healthPercentage * healthBarLength);

      cout << "Health: [";
    for (int i = 0; i < filledBars; ++i) {
      cout << "=";
    }
    for (int i = filledBars; i < healthBarLength; ++i) {
      cout << " ";
    }
      cout << "] " << currentHp << "/" << maxHp << endl;
}


int main()
{
    cout << endl;
    cout << "                        ========== INTRODUCTION IN YOUR JOURNEY ==========" << endl;
    cout << "You have been captured one night by some Roman soldiers working for a nobleman who is in the gladiatorial arena. " << endl;

    cout << "After our character manages to escape the dungeon following the volcano eruption, he finds himself in the middle of the ruins. Through dark passages and crumbling pathways, he must make his way out of this hell." << endl;

    cout << "BE CAREFUL!!!  The walls are crumbling, will you choose to jump ahead or choose to crouch.\n";
    cout << endl;
    cout << "   ===== Press 1 for Jump or 2 for Crouch =====\n";
    int choice;
    bool continuapovestea = false;

    // meniu unde alegem actiunea ce urmeaza
    while (!continuapovestea)
    {
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "You chose to jump but a pole fell on your head and you died. Respawning..." << endl;
            cout << "You can chose again 1 or 2.\n";
            break;
        case 2:
            cout << "You chose to crouch and survived the falling walls." << endl;
            cout << "Now you can continue your journey\n";
            continuapovestea = true;
            break;
        default:
            cout << " Invalid choice. Please enter 1 or 2. \n";
            break;
        }

    }
    cout << endl;

    cout << "            *** An enemy gladiator shows up in your way! *** " << endl;
    cout << endl;
    cout << "Gladiator: STOP!!! You can't escape from prison, you have to fight me first and win if you want to continue your journey!" << endl;
    cout << endl;

    Gladiator enemy1;
    RangeMan enemy2;
    Player player;

    while (player.IsAlive() && enemy1.IsAlive()) {
      
        cout << "Press 'E' and enter to attack: ";

        char key = cin.get();

        if (key == 'e') {
            int playerDamage = player.Dmg_given();
            enemy1.TakeDamage(playerDamage);
            cout << "You hit the enemy for " << playerDamage << " damage. Enemy HP: " << enemy1.GetHP() << endl;

            // Verificam daca inamicul e mort
            if (!enemy1.IsAlive()) {
                cout << endl;
                cout << "The enemy has been defeated! You win!" << endl;
                cout << "Your journey continue!" << endl;
                cout << endl;
                break;
            }

            // Randul inamicului sa dea hit
            int enemyDamage = enemy1.Dmg_given();
            player.TakeDamage(enemyDamage);
            cout << "The enemy hits you for " << enemyDamage << " damage. Your HP: " << player.GetHP() << endl;

            // Verificam daca e in viata
            if (!player.IsAlive()) {
                cout << endl;
                cout << "You have been defeated! Game over!" << endl;
                break;
            }
        }
        else {
            cout << "Please press 'E' to attack." << endl;
        }
    }


    cout << "You found 2 apples on the floor. You can eat them for healing your woonds." << endl;
    cout << endl;
  
    player.numarMere = 2; // Playerul primeste 2 mere

    char choice2;
    while (player.IsAlive() && player.numarMere>0) {
       

        cout << "Press 'H' for eating an apple: ";
        cin >> choice2;
        if (choice2 == 'h' || choice2 == 'H') 
        {
            player.heal();
            displayHealthBar(player.GetHP(), player.getMaxHp());
          }
        else 
         {
            cout << "Invalid choice. Please press 'H' to heal." << endl;
         }

        if (player.numarMere == 0) {
            cout << "You have used all your apples. You need to find another way to heal." << endl;
        }
            cout << endl;
        
        
    }

    cout << endl;
    cout << "         *** After going deeper and deeper into the dungeon tunnels, you find a bow on a dead soldier. ***" << endl;
    cout << "!!! Be careful, there are footsteps, someone is coming towards you, it looks like he has a bow and will shoot after you! Take cover and attack!" << endl;
    cout << endl;
    player.equipBow(); // primim un arc ca arma de atac cu dmg mai mare
    cout << endl;

    while (player.IsAlive() && enemy2.IsAlive()) {

        cout << "Press 'E' and enter to attack: ";

        char key = cin.get();

        if (key == 'e') {
            int playerDamage = player.Dmg_given();
            enemy2.TakeDamage(playerDamage);
            cout << "You hit the Range enemy for " << playerDamage << " damage. Enemy HP: " << enemy2.GetHP() << endl;

            // Verificam daca inamicul 2 e mort
            if (!enemy2.IsAlive()) {
                cout << endl;
                cout << "The Range enemy has been defeated! You win!" << endl;
                cout << "Congratulations! You escape from daungeon!" << endl;
                cout << endl;
                break;
            }

            // Randul inamicului 2 sa dea hit
            int enemyDamage = enemy2.Dmg_given();
            player.TakeDamage(enemyDamage);
            cout << "The Range enemy hits you for " << enemyDamage << " damage. Your HP: " << player.GetHP() << endl;

            // Verificam daca e in viata
            if (!player.IsAlive()) {
                cout << endl;
                cout << "You have been defeated! Game over!" << endl;
                break;
            }
        }
        else {
            cout << "Please press 'E' to attack." << endl;
        }
    }

 

    return 0;
}
