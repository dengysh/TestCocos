#pragma once

#include "cocos2d.h"

USING_NS_CC;

class HelpScene : public cocos2d::Layer {
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(HelpScene);
	Sprite *help1, *help2;
	MenuItemLabel *next, *front;
};