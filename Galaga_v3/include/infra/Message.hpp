#ifndef MESSAGE_HPP
#define MESSAGE_HPP

namespace ol
{

    enum class Message
    {
        ALL_ENEMIES_START_FIRING,
        ALL_ENEMIES_STOP_FIRING,
        ALL_ENEMIES_RETURN_TO_FORMATION,
        FORMATION_MOVEMENT_HORIZONTAL,
        FORMATION_MOVEMENT_SCALED,
        ALL_ACTORS_DISPERSE
    };

}

#endif // MESSAGE_HPP
