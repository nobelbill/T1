#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    void menuCallback(cocos2d::Ref* pSender);
    
    void setCallFunc_0();
    void setCallFunc_1(Ref * sender);
    void setCallFunc_2(Ref * sender,void *d);
    void setCallFunc_3(Ref * sender,Ref * object);
    
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
