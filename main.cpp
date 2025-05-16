#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

int main() {

  std::cout << "enter player name:" << std::endl;
  std::string player_name, my_pokemon;
  std::cin >> player_name;
  std::cout << "welcome " << player_name << std::endl;
  std::cout << "Choose your Pokemon!\nEnter your choice:\n" << std::endl;
  std::vector<std::string> pokemon_list = {"charmander", "bulbasaur", "squirtle"};
  for (const auto& pokemon_name : pokemon_list) {std::cout << pokemon_name << std::endl;}
  std::cin >> my_pokemon;
  std::transform(my_pokemon.begin(), my_pokemon.end(), my_pokemon.begin(),
                  [](unsigned char c) {return std::tolower(c);});
  if (std::find(pokemon_list.begin(), pokemon_list.end(), my_pokemon) == pokemon_list.end()) {
    std::cerr << "invalid choice" << std::endl;
  } else {
    std::cout << "You have chosen " << my_pokemon << std::endl;
  }
  return 0;
}