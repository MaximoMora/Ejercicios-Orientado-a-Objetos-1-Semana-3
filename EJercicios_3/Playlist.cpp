
#include <iostream>
#include <string>

class Playlist {
    public:
    std::string _name;
    std::string _listOfSongs;
    std::string _state;
    int _indexSong;


    Playlist(std::string name, std::string listOfSongs, std::string state, int indexSong) {
        _name = name;
        _listOfSongs = listOfSongs;
        _state = state;
        _indexSong = indexSong;
    }

    void ShowInformation() {
        std::cout << "Nombre Playlist: " << _name << std::endl;
        
    }


    void ShowSong() {
        for(int i; i <)
    }

};


int main() {

    Playlist kevin("Kevin Playlist","Naruto OP13, Jaivas cancion2, Himno de japon","Pausa",1);


    kevin.ShowInformation();
}