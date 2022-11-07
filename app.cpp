#include <iostream>
#include "profile.hpp"


int main() {
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_hobby("Listening to Syntax Web Development podcast on iOS");
  sam.add_hobby("Building Arduino projects with my son");
  sam.add_hobby("Traveling to the Carribean Islands");
  sam.add_hobby("Skateboarding and riding my ninebot scooter with my son");
  sam.add_hobby("Playing games with family/friends on Playstation Link");
  sam.add_hobby("Building and fixing iphones, macbooks, and soldering circuits");
  std::cout << sam.view_profile();
};