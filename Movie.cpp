//
// Created by christopher on 12/06/20.
//

#include "Movie.h"
#include <utility>

Movie::Movie(string id, string name, int duration, string genre, double score)
: AbstractVideo(std::move(id), std::move(name), duration, std::move(genre)), score(score) {

}


double Movie::getScore() const {
    return score;
}