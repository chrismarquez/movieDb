//
// Created by christopher on 12/06/20.
//

#include "AbstractVideo.h"

#include <utility>

AbstractVideo::AbstractVideo(string id, string name, int duration, string genre) :
        id(std::move(id)),
        name(std::move(name)),
        duration(duration),
        genre(std::move(genre)) {}

string AbstractVideo::getId() const {
    return id;
}

void AbstractVideo::setId(string id) {
    this->id = id;
}

string AbstractVideo::getName() const {
    return name;
}

void AbstractVideo::setName(string name) {
    this->name = name;
}

string AbstractVideo::getDuration() const {
    int hours = duration / 60;
    int minutes = duration % 60;
    string result;
    result = (hours >= 10) ? to_string(hours) : ("0" + to_string(hours));
    result += ":";
    result += (minutes >= 10) ? to_string(minutes) : ("0" + to_string(minutes));
    return result;
}

void AbstractVideo::setDuration(int minutes) {
    this->duration = minutes;
}

string AbstractVideo::getGenre() const {
    return genre;
}

void AbstractVideo::setGenre(string genre) {
    this->genre = genre;
}


