#ifndef MEDIAPLAYER_H // Include Guard
#define MEDIAPLAYER_H
#include "Image.h"
#include "Video.h"
#include "Media.h"

class MediaPlayer
{
private:
    Media *items[100];
    int index, last;

public:
    MediaPlayer();
    void addMedia(Media *item);

    void play();

    void next();

    void stop();

    void showList();
};

#endif