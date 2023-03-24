#include "Media.h"
using namespace std;

// :: scope resolution operator

Media::Media(string title, int sizeInBytes)
    : title(title), sizeInBytes(sizeInBytes) {}

string Media::getTitle() {
  return title;
}

int Media::getSizeInBytes() {
  return sizeInBytes;
}

double Media::getSizeInKB() {
  return getSizeInBytes() / 1024.0;
}

double Media::getSizeInMB() {
  return getSizeInKB() / 1024.0;
}

double Media::getSizeInGB() {
  return getSizeInMB() / 1024.0;
}