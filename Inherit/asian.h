#include "player.h"

class Asian : public Player{

    public:
        Asian(std::string, int, std::string);
        ~Asian();

    private:
    std::string skin_color;

    public:
        void show();
};