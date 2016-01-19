#ifndef __MenuScene_H__
#define __MenuScene_H__

#include "cocos2d.h"
USING_NS_CC;

class MenuScene : public LayerColor
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    void changeScene(Ref * sender);
    
       CREATE_FUNC(MenuScene);
};

#endif // __HELLOWORLD_SCENE_H__
