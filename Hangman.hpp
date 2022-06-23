#pragma once
#include <string>

class Hangman
{
	std::string secret; //przekazane z konstruktora
	bool alphabet[26]; // warto zainicjalizowac w konstruktorze
	std::string guessedWord; //na samym poczatku bedzie mial same _ _ 
	int attempt; 
	static constexpr int maxAttempts = 5;  // limit dla wszystkich obiektów (dlatego jest static)(nawet jak utworzê 100 obiektów to max attempts bêdzie zajmowa³ 4 bajty)
public:
	Hangman(std::string secret);
	std::string getGuess();
	std::string getAlphabet();
	//returns true if all characters are guessed
	bool check(char c);
	std::string getSecret();
	int attemptsLeft();
};

//zdefiniowac konstruktor: wprowadzic secreta; wypelnic tablice; guessed word - same kreski
