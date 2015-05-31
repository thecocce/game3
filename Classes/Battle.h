//
//  Battle.h
//  Game3
//
//  Created by Stepanov Ilia on 12/04/15.
//
//

#ifndef __Game3__Battle__
#define __Game3__Battle__

#include "GameMap.h"
#include "ParticleMap.h"
#include "CountMap.h"
#include "GradientMap.h"

#include <Artemis/Artemis.h>

using namespace artemis;
using namespace cocos2d;

/*
 
 */
class Battle
{
public:
	
	Battle();
	~Battle();
	
	bool init(); //@todo: here should be all data about current game: players, map
	
	void update(float delta);
	
	void startShipMoving(Vec2 newCoords);
	void updateGoal(Vec2 coords);
	
private:
	
	World _world;
	
	int _touchedShipId;
	
	CC_SYNTHESIZE_RETAIN(GameMap *, _gameMap, GameMap);
	CC_SYNTHESIZE_RETAIN(ParticleMap *, _particleMap, ParticleMap);
	CC_SYNTHESIZE_RETAIN(CountMap *, _countMap, CountMap);
	CC_SYNTHESIZE_RETAIN(GradientMap *, _gradientMap, GradientMap);
};

#endif /* defined(__Game3__Battle__) */
