#ifndef __MENU_SCENE_H__
#define __MENU_SCENE_H__

#include "cocos2d.h"

class MainMenu : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    // A selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);

    // Implement the "static create()" method manually
    CREATE_FUNC(MainMenu);

    cocos2d::Sprite *mySprite;
private:
    void loadCardDatabase();
};

#endif // __MENU_SCENE_H__
