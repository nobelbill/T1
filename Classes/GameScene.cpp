#include "GameScene.h"
#include "MenuScene.h"
#include "ui/CocosGUI.h"
USING_NS_CC;


Scene* GameScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = GameScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}


bool GameScene::init()
{
    if(!Layer::init())
    {
        return false;
    }
    
    auto item  =  MenuItemFont::create("Menu Scene",CC_CALLBACK_1(GameScene::changeScene, this));
    
    auto menu = Menu::create(item, NULL);
    menu->alignItemsHorizontally();
    this->addChild(menu);
    return true;
}

void GameScene::changeScene(Ref * sender)
{
//    auto scene =  
    Director::getInstance()->popScene();//(MenuScene::createScene());
}