//
// Created by christopher on 12/06/20.
//

#include "Video.h"

#include <utility>

Video::Video(string id, string name, int duration, string genre) :
        id(std::move(id)),
        name(std::move(name)),
        duration(duration),
        genre(std::move(genre)) {}

string Video::getId() const {
    return id;
}

void Video::setId(string& id) {
    this->id = id;
}

string Video::getName() const {
    return name;
}

void Video::setName(string& name) {
    this->name = name;
}

string Video::getDuration() const {
    int hours = duration / 60;
    int minutes = duration % 60;
    string result;
    result = (hours >= 10) ? to_string(hours) : ("0" + to_string(hours));
    result += ":";
    result += (minutes >= 10) ? to_string(minutes) : ("0" + to_string(minutes));
    return result;
}

void Video::setDuration(int& minutes) {
    this->duration = minutes;
}

string Video::getGenre() const {
    return genre;
}

void Video::setGenre(string& genre) {
    this->genre = genre;
}


