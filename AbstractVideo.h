//
// Created by christopher on 12/06/20.
//

#ifndef MOVIEDB_ABSTRACTVIDEO_H
#define MOVIEDB_ABSTRACTVIDEO_H
#include <iostream>
#include "IVideo.h"

using namespace std;
class AbstractVideo : public IVideo {
protected:
    string id;
    string name;
    int duration;
    string genre;
public:
    explicit AbstractVideo(string id, string name, int duration, string genre);
    string getId() const override ;
    void setId(string id);
    string getName() const override ;
    void setName(string name);
    string getDuration() const override ;
    void setDuration(int minutes);
    string getGenre() const override ;
    void setGenre(string genre);
    virtual double getScore() const override = 0;
};

#endif //MOVIEDB_ABSTRACTVIDEO_H
