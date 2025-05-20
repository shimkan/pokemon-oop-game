#include <iostream>
#include <string>
#include <vector>

enum class PokemonChoice {
  Charmander,
  Bulbasaur,
  Squirtle,
  InvalidChoice
};

int main() {
  std::cout << "enter player name:" << std::endl;
  std::string player_name;
  std::cin >> player_name;
  std::cout << "welcome " << player_name << std::endl;
  std::cout << "Choose your Pokemon!\nEnter your choice:\n" << std::endl;
  std::vector<std::string> pokemon_list = {"1. charmander", "2. bulbasaur", "3. squirtle"};
  for (const auto& pokemon_name : pokemon_list) {std::cout << pokemon_name << std::endl;}
  int my_pokemon;
  PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice;
  std::cin >> my_pokemon;
  
  switch(my_pokemon) {
    case 1:
      std::cout << "you have chosen charmander! A fiery choice!" << std::endl;
      chosen_pokemon = PokemonChoice::Charmander;
      break;
    case 2:
      std::cout << "you have chosen bulbasaur! A clean choice!" << std::endl;
      chosen_pokemon = PokemonChoice::Bulbasaur;
      break;
    case 3:
      std::cout << "you have chosen squirtle! A splashy choice!" << std::endl;
      chosen_pokemon = PokemonChoice::Squirtle;
      break;
    default:
      std::cout << "you have been assigned Pikachu!" << std::endl;
      chosen_pokemon = PokemonChoice::InvalidChoice;
      break;
  }
  return 0;
}