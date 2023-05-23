#ifndef ENIGMAMACHINE_ROTOR_POSITION_UPDATER_H
#define ENIGMAMACHINE_ROTOR_POSITION_UPDATER_H

#endif //ENIGMAMACHINE_ROTOR_POSITION_UPDATER_H

// Updates rotor positions everytime 1 lap of the loop is complete.
// The void statement always add +1 rotor 1 (fastest) as it is the fastest rotor.
// The program then checks if rotor 1 is equal to 26 if it is rotor 1 should change
// to position 0 and rotor 2 should now step one place, the same happens for rotor 3.
void update_rotor_positions() {
    rotor_position[0]++;
    if (rotor_position[0] == ALPHABET_SIZE)
    {
        rotor_position[0] = 0;
        rotor_position[1]++;
    }
    if (rotor_position[1] == ALPHABET_SIZE)
    {
        rotor_position[1] = 0;
        rotor_position[2]++;
    }
    if (rotor_position[2] == ALPHABET_SIZE)
    {
        rotor_position[2] = 0;
    }
}