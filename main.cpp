#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<std::string> monster = {

            "      *      *      *    *     *",
            "######*######*######*####*#####*",
            "%%%%%%*%%%%%%*%%%%%%*%%%%*%%%%%*",

    };


    for (auto &item : monster) {

        auto result = std::find (std::begin(item), std::end(item), '*');


        int i = 0;
        while (result != std::end(item)) {
            std::cout << *result;
            std::cout << i++;
            result = std::find(result + 1, std::end(item), '*');
        }
    }





/*
    for (auto m : monster){

        if (result != std::end(monster)){

        }
    }
*/


    return 0;
}

