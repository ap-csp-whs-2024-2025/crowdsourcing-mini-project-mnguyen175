/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

int main()
{
    std::vector<std::string> song_name = {};
    std::vector<std::string> song_artist = {};
    std::vector<int> song_duration = {};

    std::string yes_no = "y";
    while (yes_no != "no")
    {
        std::cout << "Enter a song name, artist, and duration in seconds\n"
        std::string name;
        std::string artist;
        int duration;

        std::cin >> name >> artist >> duration;
        append(song_name, name);
        append(song_artist, artist);
        append(song_duration, duration);

        std::cout << "Displaying lists\n";
        display(song_name);
        display(song_artist);
        display(song_duration);

        std::cout << "Would you like to enter a new song (y/n?)\n";
        std::cin >> yes_no;
    }

    
    return 0;
}
