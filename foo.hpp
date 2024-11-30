#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <algorithm>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result;

   
    for (auto& person : people) {
        person.birthday(); 
    }

    
    for (auto it = people.rbegin(); it != people.rend(); ++it) {
        if (it->isMonster()) {
            result.push_back('n'); 
        }
        else {
            result.push_back('y');
        }
    }

    return result;
}
