#include <iostream>
#include "Media.h"
#include "Image.h"
#include "Mediaplayer.h"

using namespace std;

int main()
{
  MediaPlayer player;
  Image *test = new Image("image.jpg", 811200, 15, 10, 'x', 'r');
  Video *test1 = new Video("dog.mp4", 12345, 305);
  player.addMedia(test);
  player.addMedia(test1);
  cout << "---------" << endl;
  player.play();
  cout << "---------" << endl;
  player.next();
  cout << "Next ->" << endl;
  cout << "---------" << endl;
  player.play();
  cout << "---------" << endl;
  cout << "Show list" << endl;
  cout << "---------" << endl;
  player.showList();
  player.stop();
  cout << "---------" << endl;
  cout << "stop" << endl;
  cout << "---------" << endl;
  player.play();
  cout << "---------" << endl;
  cout << "Show list" << endl;
  cout << "---------" << endl;
  player.showList();

  cout << "---------" << endl;
  cout << "Next ->" << endl;
  cout << "---------" << endl;
  player.next();
  cout << "---------" << endl;
  cout << "Show list" << endl;
  cout << "---------" << endl;
  player.showList();
  player.next();
  cout << "---------" << endl;
  cout << "Next ->" << endl;
  cout << "---------" << endl;
  cout << "---------" << endl;
  cout << "Show list" << endl;
  cout << "---------" << endl;
  player.showList();
  player.next();
  cout << "---------" << endl;
  cout << "Next ->" << endl;
  cout << "---------" << endl;
  cout << "---------" << endl;
  cout << "Show list" << endl;
  cout << "---------" << endl;
  player.showList();
  return 0;
}