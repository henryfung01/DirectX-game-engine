#pragma once
#include "Sprite.h"  
#include "ParticleSystem.h"  
#include "CollidingObject.h"

using namespace Coding4Fun::FallFury::DXCore;
using namespace Coding4Fun::FallFury::DXCore::BasicSprites;


class FireBall :public ParticleSystem, public CollidingObject
{
protected:
	 
public: 
	FireBall();
	virtual  void Update(float timeDelta);
	virtual void Draw(BasicSprites::SpriteBatch^ m_spriteBatch);


	float RandFloat(float min, float max);
	//bool IsColliding(GameObject  otherObj);
	float2 GetTopLeft();
	float2 GetBottomRight();
	void UpdateCollisionGeometry(float2 prevPos, float2 pos, float rot);
	void setCollisionGeometryForParticle(float2 size, float2 _pos);

};