#include <stdio.h>
#include <string.h>

struct _Music
{
    char title[100];
    int views;
};

typedef struct _Music Music;

void printMusic(Music music)
{
    printf("Title : %s\n", music.title);
    printf("Views : %d\n", music.views);
}

void listen(Music *pMusic)
{
    pMusic->views++;
}

void findTopViews(Music playlist[], int size, Music **topViews)
{
    *topViews = &playlist[0];
    for (int i = 1; i < size; i++)
    {
        if (playlist[i].views > (*topViews)->views)
        {
            *topViews = &playlist[i];
        }
    }
}

int main()
{
    Music playlist[10];
    Music *topViews;

    int size = 4;

    strcpy(playlist[0].title, "505");
    strcpy(playlist[1].title, "OMG");
    strcpy(playlist[2].title, "Badboy");
    strcpy(playlist[3].title, "Ditto");

    playlist[0].views = 1000;
    playlist[1].views = 2000;
    playlist[2].views = 3000;
    playlist[3].views = 4000;

    findTopViews(playlist, size, &topViews);

    printMusic(*topViews);
}