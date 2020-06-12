//
// Created by christopher on 12/06/20.
//

#include "Series.h"

#include <utility>

Series::Series(string id, string name, int duration, string genre)
: Video(std::move(id), std::move(name), duration, std::move(genre)) {

}

double Series::getScore() const {
    // Average over all episodes of all seasons
    return 0.0;
}