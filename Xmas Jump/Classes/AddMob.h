#ifndef ADDMOB_H
#define ADDMOB_H

#include "cocos2d.h"

using namespace cocos2d;

class AddMob {
    public:
        static void showInterstitial();
        static void showVideo();
        static bool getIsFinalVideo();
        static void resetIsFinalVideo();

};

#endif // ADDMOB_H
