#include "HelloWorldScene.h"
#include "ui/CocosGUI.h"
USING_NS_CC;


Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
    
	closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));

    // create menu, it's an autorelease object
//    auto menu = Menu::create(closeItem, NULL);
//    menu->setPosition(Vec2::ZERO);
//    this->addChild(menu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    

   
    auto cat = Sprite::create("cat.png");

    // position the sprite on the center of the screen
    cat->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    cat->setScale(0.1, 0.1);
    // add the sprite as a child to this layer
    this->addChild(cat, 0);
    
    auto moveBy = MoveBy::create(2, Vec2(50,10));
    
    auto jump = JumpBy::create(0.5, Vec2(0, 0), 100, 1);
    //cat->runAction(moveBy);
    
    // Move a sprite to a specific location over 2 seconds.
    auto moveTo = MoveTo::create(2, Vec2(50,10));
    auto rotateTo= RotateTo::create(1,3600*20);
    auto move_ease_in = EaseBounceIn::create(rotateTo->clone() );
    
    auto seq = Sequence::create(moveBy, moveTo, nullptr);

    
    cat->runAction(move_ease_in);
    
    
//    auto button = cocos2d::ui::Button::create("CloseNormal.png", "CloseSelected.png", "CloseSelected.png");
//    
//    button->setTitleText("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
//    
//    button->addTouchEventListener([&](Ref* sender, cocos2d::ui::Widget::TouchEventType type){
//        switch (type)
//        {
//            case ui::Widget::TouchEventType::BEGAN:
//                break;
//            case ui::Widget::TouchEventType::ENDED:
//
//                break;
//            default:
//                break;
//        }
//    });
//    
//    this->addChild(button);
    
//    CCLabelTTF * pLabel = CCLabelTTF::create("HELLO COCOS ABcdefghijklmn opqrstuvwxyz", "Thonburi", 64);
//    CCLabelTTF * pLabel = CCLabelTTF::create("HELLO COCOS ABcdefghijklmn opqrstuvwxyz", "Thonburi", 64,CCSize(300,200),kCCTextAlignmentCenter,kCCVerticalTextAlignmentCenter);
//    pLabel->setPosition(ccp(240,160));
//    this->addChild(pLabel);
//    auto ttf1 = Label::createWithSystemFont("Pokemon Solid", "Pokemon Solid", 30);
//    ttf1->setPosition(Point(240,100));
//    this->addChild(ttf1);

    auto item_1 =  MenuItemImage::create("start-button.png", "start-button-selected.png", CC_CALLBACK_1(HelloWorld::menuCallback,this));
    
    auto menu = Menu::create(item_1,NULL);
    menu->alignItemsVertically();
    this->addChild(menu);
    return true;
}
void HelloWorld::setCallFunc_0()
{
    CCLOG("setCallFunc_0");
}
void HelloWorld::setCallFunc_1(Ref * sender)
{
    CCLOG("setCallFunc_1");
}
void HelloWorld::setCallFunc_2(Ref * sender,void *d)
{
    CCLOG("setCallFunc_2");
}
void HelloWorld::setCallFunc_3(Ref * sender,Ref * object)
{
    CCLOG("setCallFunc_3");
}

void HelloWorld::menuCallback(Ref * sender)
{
    CCLOG("menu call");
}

void HelloWorld::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
