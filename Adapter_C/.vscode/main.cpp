//C++ code
#include <iostream>
#include <string>

using namespace std;

class CDPlayerInterface
{
public:
    virtual void playSong() = 0;
};

class CassettePlayer
{
    string _song;
public:
    CassettePlayer(string song) :_song(song){}

    void playSongFromCassette(int volume)
    {
        cout << "Playing "<< _song << " song from cassette at "<< volume <<" volume. 
        And it rocks baby!!";
    }

};

class Adapter : public CDPlayerInterface, private CassettePlayer
{
    int _volume;
public:
    Adapter(string song, int volume) :_volume(volume), CassettePlayer(song){}
        
    void playSong()
    {
        playSongFromCassette(_volume);
    }

};

int main()
{
    CDPlayerInterface* newAdapterPlayer = new Adapter("Hunky Dory", 110);
    newAdapterPlayer->playSong();
    cout << "\n";
        delete newAdapterPlayer;
    return 1;
}
