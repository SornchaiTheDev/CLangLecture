/**
 *  this is pointer refer to object that skip scope to Data member
 */

#include <iostream> // input output stream (cout)
#include <sstream>  //       string stream (ss <<)
using namespace std;

// define class
class Music
{
private: // data hiding (Encapsulation Design Pattern)
    // attributes (Data members)
    string title;
    int views;

public:
    // methods (Member Functions)
    // explicit is optional just a keyword to tell that this constructor is get data from outside
    explicit Music(string title)
    {
        this->title = title;
        views = 0;
    }

    string getTitle()
    {
        return title;
    }

    int getViews()
    {
        return views;
    }

    void setTitle(string title)
    {
        this->title = title;
    }
    
    // use for Debug scenario
    string toString()
    {
        stringstream ss;

        ss << title << " (" << views << " views)";
        return ss.str();
    }

    void listen()
    {
        views++;
    }

    void listen(int views)
    {
        if (views > 0)
        {
            this->views += views;
        }
    }
};

int main()
{
    // declare instance
    Music music("Ditto");
    Music rockMusic("High Way to Hell");
    music.listen();
    cout << music.toString() << endl;
    rockMusic.listen(100);
    cout << rockMusic.toString() << endl;
    cout << "--------------" << endl;

    // Music *underline = &music;
    // underline = &rockMusic;

    // new operator look like malloc using it with pointer and constructor
    Music *underline = new Music("OMG");

    cout << underline->toString() << endl;

    Music *musics[10];
    musics[0] = &music;
    musics[1] = &rockMusic;
    musics[2] = underline;
    musics[3] = new Music("Temple (Heart = nong nut)");
    musics[3]->setTitle("Chokun");
    for (int i = 0; i <= 3; i++)
    {
        cout << musics[i]->toString() << endl;
    }
    return 0;
}
