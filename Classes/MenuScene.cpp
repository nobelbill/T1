#include "MenuScene.h"
#include "GameScene.h"
#include "ui/CocosGUI.h"
USING_NS_CC;


Scene* MenuScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = MenuScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}


bool MenuScene::init()
{
    if(!LayerColor::initWithColor(Color4B(0,0,255,255)))
    {
        return false;
    }
    
    auto item  =  MenuItemFont::create("Next Scene",CC_CALLBACK_1(MenuScene::changeScene, this));
    
    auto menu = Menu::create(item, NULL);
    menu->alignItemsHorizontally();
    this->addChild(menu);
    return true;
}

void MenuScene::changeScene(Ref * sender)
{
    auto scene = TransitionCrossFade::create(3.0,GameScen ve::createScene());
//    Director::get
    Director::getInstance()->pushScene(scene);
//    Director::getInstance()->replaceScene(GameScene::createScene());
}
