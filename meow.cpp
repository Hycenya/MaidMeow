#include <bits/stdc++.h>
using namespace std;

int main(){
  string name, age, gamesave, reputation, maids, social, guild, portal;
  cout << ("Welcome to Maid Application. We will ask you a series of questions for you to answer.") << endl;
  cout << ("1. What's your IGN: \n");
  cin >> name;
  cout << ("2. What's your age (note, you can type - if you don't want to disclose it) \n");
  cin >> age;
  cout << ("3. At what point in the game are you at? \n");
  cin >> gamesave;
  cout << ("4. What would you say your reputation is like? \n");
  cin >> reputation;
  cout << ("5. Do you see yourself being a part of maids for a while? \n");
  cin >> maids;
  cout << ("6. Do you enjoy playing with others? \n");
  cin >> social;
  cout << ("7. What are you looking for in a guild? \n");
  cin >> guild;
  cout << ("8. Would you be interest in forming a blood contract eternally binding to grind portal to donate mats to maids forever and ever? \n");
  cin >> portal;
  cout << ("You wrote:");
  cout << (name) << endl;
  cout << (age) << endl;
  cout << (gamesave) << endl;
  cout << (reputation) << endl;
  cout << (maids) << endl;
  cout << (social) << endl;
  cout << (guild) << endl;
  cout << (portal) << endl;
}