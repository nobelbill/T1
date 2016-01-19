#ifndef __GameScene_H__
#define __GameScene_H__

#include "cocos2d.h"

class GameScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    void changeScene(Ref * sender);
    
       CREATE_FUNC(GameScene);
};

#endif // __HELLOWORLD_SCENE_H__
