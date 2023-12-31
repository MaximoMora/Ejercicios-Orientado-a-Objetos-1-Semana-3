
#include <iostream>
#include <vector>
#include <string>
#include <random>


class Playlist {
public:
    std::string _name;
    std::vector<std::string> _listOfSongs;
    std::string _state;
    int _indexSong;


    Playlist(std::string name, std::vector<std::string> listOfSongs, std::string state, int indexSong) {
        _name = name;
        int lenght = listOfSongs.size();
        for (int i = 0; i < lenght; i = i + 1) {
            _listOfSongs.push_back(listOfSongs[i]);
        }
        _state = state;
        _indexSong = indexSong;
    }

    void State() {
        std::cout << " " << std::endl;
        std::cout << "Playlist:" << _name << std::endl;
        std::cout << "Estado:" << _state << std::endl;
        std::cout << "Cancion:" << _listOfSongs[_indexSong] << std::endl;
    }
    void AddSong(std::string newSong) {
        _listOfSongs.push_back(newSong);
    }

    void DeleteSong(std::string deleteSong) {
        int lenght = _listOfSongs.size();
        for (int i = 0; i < lenght; i = i + 1) {
            if (_listOfSongs[i] == deleteSong) {
                std::cout << "La Cancion: " << deleteSong << " se elimino " << std::endl;

                _listOfSongs.erase(_listOfSongs.begin() + i);

            }
        }
    }

    void ShowPlaylist() {
        std::cout << "" << std::endl << _name << std::endl;
        int lenght = _listOfSongs.size();
        for (int i = 0; i < lenght; i = i + 1) {
            std::cout << i << ":" << _listOfSongs[i] << std::endl;
        }
        std::cout << " " << std::endl;
    }

    void PlaySongByName(std::string song) {
        int lenght = _listOfSongs.size();
        for (int i = 0; i < lenght; i = i + 1) {
            if (_listOfSongs[i] == song) {
                _indexSong = i;
            }
        }
        _state = "reproduciendo";

        std::cout << _state << " " << song << std::endl;
    }

    void PlaySong() {
        _state = "reproduciendo";
    }

    void PauseSong() {
        _state = "pausa";
    }

    void StopSong() {
        _state = "detenido";
    }

    void NextSong() {
        _state = "reproduciendo";
        _indexSong = _indexSong + 1;
    }

    void BeforeSong() {
        _state = "reproduciendo";
        _indexSong = _indexSong - 1;
    }

    void RandomSong() {
        _state = "reproduciendo";
        int lenght = _listOfSongs.size();
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> distribution(1, lenght);
        int randomNumber = distribution(gen);
        _indexSong = randomNumber;

    }

    void Set_name(std::string newName) {
        _name = newName;
    }



};



void MenuMain() {
    std::cout << "1 - Crear Playlist" << std::endl;
    std::cout << "2 - Elegir Playlist" << std::endl;
    std::cout << "0 - Salir" << std::endl;


}


void MenuPlaylist() {
    std::cout << "1  - Agregar Cancion" << std::endl;
    std::cout << "2  - Eliminar Cancion" << std::endl;
    std::cout << "3  - Ver Canciones" << std::endl;
    std::cout << "4  - Reproducir Cancion" << std::endl;
    std::cout << "5  - Seleccionar Cancion para reproducir" << std::endl;
    std::cout << "6  - Pausar Cancion" << std::endl;
    std::cout << "7  - Detener reproduccion" << std::endl;
    std::cout << "8  - Siguiente Cancion" << std::endl;
    std::cout << "9  - Cancion Anterior" << std::endl;
    std::cout << "10 - Cancion Aleatoria" << std::endl;
    std::cout << "11 - Estado Playlist" << std::endl;
    std::cout << "12 - Estado Cancion" << std::endl;
    std::cout << "13 - Cambiar Nombre de la playlist" << std::endl;
    std::cout << "0 - Salir" << std::endl;

}

void CreatePlaylist() {
    std::cout << "Nombre de la playlist" << std::endl << "> ";

}


Playlist playlist_1("Lista de canciones", {}, "Detenido", 0);


int main() {

    std::string newSong;
    std::string deleteSong;
    std::string playSong;

    int userOption = -1;

    std::string namePlaylist;
    CreatePlaylist();
    std::cin >> namePlaylist;
    playlist_1.Set_name(namePlaylist);

    while (userOption != 0) {

        MenuPlaylist();
        std::cout << "> ";
        std::cin >> userOption;
        std::cout << typeid(userOption).name() << std::endl;
        switch (userOption)
        {
        case 1 == 1:
            std::cout << "Cancion a agregar: ";
            std::cin >> newSong;
            playlist_1.AddSong(newSong);
            continue;

        case 2:
            std::cout << "Cancion a eliminar: ";
            std::cin >> deleteSong;
            playlist_1.DeleteSong(deleteSong);
            continue;

        case 3:
            playlist_1.ShowPlaylist();
            continue;

        case 4:
            playlist_1.PlaySong();
            continue;

        case 5:
            std::cout << "Cancion a reproducir: ";
            std::cin >> playSong;
            continue;

        case 6:
            playlist_1.PauseSong();
            continue;

        case 7:
            playlist_1.StopSong();
            continue;

        case 8:
            playlist_1.NextSong();
            continue;

        case 9:
            playlist_1.BeforeSong();
            continue;

        case 10:
            playlist_1.RandomSong();
            continue;

        case 11:
            playlist_1.State();
            continue;

        default:
            std::cout << "Eliga otra opcion" << std::endl;
            break;
        }

    }

    return 1;

}