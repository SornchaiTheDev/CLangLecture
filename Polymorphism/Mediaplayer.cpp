#include "Image.h"
#include "Video.h"
#include "Media.h"
#include "Mediaplayer.h"
#include "sstream"

MediaPlayer::MediaPlayer()
{
    index = 0;
    last = 0;
}
void MediaPlayer::addMedia(Media *item)
{
    for (int i = 0; i <= 100; i++)
    {
        if (items[i] == NULL)
        {
            items[i] = item;
            last = i;
            break;
        }
    }
}

void MediaPlayer::play()
{
    if (index >= 0)
    {
        cout << items[index]->toScreen() << endl;
    }
    else
    {
        cout << "NONE" << endl;
    }
}

void MediaPlayer::next()
{
    if (index == last)
    {
        index = 0;
    }
    else
    {
        index++;
    }
}

void MediaPlayer::stop()
{
    index = -1;
}

void MediaPlayer::showList()
{
    stringstream ss;
    for (int i = 0; i <= 100; i++)
    {
        if (items[i] == NULL)
        {
            break;
        }
        if (index == i)
        {
            ss << "* ";
        }
        ss << items[i]->getTitle() << endl;
    }
    cout << ss.str();
}
