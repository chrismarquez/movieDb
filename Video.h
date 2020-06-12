//
// Created by christopher on 12/06/20.
//

#ifndef MOVIEDB_VIDEO_H
#define MOVIEDB_VIDEO_H
#include <iostream>

using namespace std;
class Video {
protected:
    string id;
    string name;
    int duration;
    string genre;
public:
    explicit Video(string id, string name, int duration, string genre);
    string getId() const;
    void setId(string&& id);
    string getName() const;
    void setName(string&& name);
    string getDuration() const;
    void setDuration(int&& minutes);
    string getGenre() const;
    void setGenre(string&& genre);
    virtual double getScore() const = 0;
};

#endif //MOVIEDB_VIDEO_H
