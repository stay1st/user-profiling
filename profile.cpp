#include <iostream>
#include "profile.hpp"


Profile::Profile(std::string profile_name, int profile_age, std::string profile_city, std::string profile_country, std::string profile_pronoun) 
: name(profile_name), age(profile_age), city(profile_city), country(profile_country), pronouns(profile_pronoun) {
    
  }

std::string Profile::view_profile() {
  std::string profile_information = "====================\n";
  profile_information += "Name: " + name;
  profile_information += "\nAge: " + std::to_string(age);
  profile_information += "\nPronouns: " + pronouns + "\n";
  std::string hobby_list;
  int ordered_styling = 1;
  for (std::string hobby : hobbies) {
     hobby_list += std::to_string(ordered_styling) + ')' + " " + hobby + ".\n";
     ordered_styling++;
  }
  profile_information += "Hobbies\n" + hobby_list;
  profile_information += "====================\n";
  return profile_information;
}

void Profile::add_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
}