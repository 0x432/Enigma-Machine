#ifndef ENIGMAMACHINE_VARIABLES_AND_ARRAYS_H
#define ENIGMAMACHINE_VARIABLES_AND_ARRAYS_H

#endif //ENIGMAMACHINE_VARIABLES_AND_ARRAYS_H

// Stores all the alphabetical values in order, if we were to call alphabet[0] it would return A.
char alphabet[ALPHABET_SIZE] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

// Stores the rotor chars in a 2D array an example would be if rotor 2 is at position 3, and you want to change the incoming letter it would rotors[0][2] = H that is the letter that would be substituted for the previous letter.
char rotors[ROTOR_AMOUNT][ALPHABET_SIZE] = {
        {'E', 'K', 'M', 'F', 'L', 'G', 'D', 'Q', 'V', 'Z', 'N', 'T', 'O','W', 'Y', 'H', 'X', 'U', 'S', 'P', 'A', 'I', 'B', 'R', 'C', 'J'},
        {'A', 'J', 'D', 'K', 'S', 'I', 'R', 'U', 'X', 'B', 'L', 'H', 'W','T', 'M', 'C', 'Q', 'G', 'Z', 'N', 'P', 'Y', 'F', 'V', 'O', 'E'},
        {'B', 'D', 'F', 'H', 'J', 'L', 'C', 'P', 'R', 'T', 'X', 'V', 'Z','N', 'Y', 'E', 'I', 'W', 'G', 'A', 'K', 'M', 'U', 'S', 'Q', 'O'},
        {'E', 'S', 'O', 'V', 'P', 'Z', 'J', 'A', 'Y', 'Q', 'U', 'I', 'R','H', 'X', 'L', 'N', 'F', 'T', 'G', 'K', 'D', 'C', 'M', 'W', 'B'},
        {'V', 'Z', 'B', 'R', 'G', 'I', 'T', 'Y', 'U', 'P', 'S', 'D', 'N','H', 'L', 'X', 'A', 'W', 'M', 'J', 'Q', 'O', 'F', 'E', 'C', 'K'}
};

// Stores both reflector B & C in a 2D char array.
char reflectors[MAX_REFLECTORS][ALPHABET_SIZE] = {
        {'Y','R','U','H','Q','S','L','D','P','X','N','G','O','K','M','I','E','B','F','Z','C','W','V','J','A','T'},
        {'F','V','P','J','I','A','O','Y','E','D','R','Z','X','W','G','C','T','K','U','Q','S','B','N','M','H','L'}
};

char input_text[MAX_TEXT_SIZE]; // Stores the text that is supposed to be encoded / decoded in an array. (eg: 0 = 'H', 1 = 'E').
char output_text[MAX_TEXT_SIZE]; // Stores the output text that has been passed through the enigma machine in an array. (eg: 0 = 'Z', 1 = 'F').
char plugboard_pairs[MAX_PLUGBOARD_PAIRS][SIZE_OF_PAIRS]; // Stores all the of plug board pairs in a 2D array (eg: pairs 0 = 'A','B') up yo 13 as 13 x 2 = 26 which is the alpha limit.
int rotor_position[MAX_ROTOR_USED]; // Stores the rotor positions in an array (eg: rotor1 = 0 position = 12).
int rotor_order[MAX_ROTOR_USED]; // Stores the order of the rotors in an int array
int total_plugboard_pairs; // Stores the number of plug board pairs (eg: pairs = 12).
int reflector_choice; // Stores the chosen reflector (eg: reflector = 1).