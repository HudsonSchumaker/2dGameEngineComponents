/*
    SchumakerLab
    SchumakerTeam
    Hudson Schumaker
*/

#pragma once
#include "Gfx.h"
#include "../include/Common.h"

class Scene {
private:
	virtual void load() = 0;
	virtual void input() = 0;
	virtual void update() = 0;
	virtual void render() = 0;
	virtual void unload() = 0;

protected:
	SDL_Renderer* renderer;
	float deltaTime = 0.0f;
	int ticksLastFrame = 0;
	bool isRunning = false;
	short exit = 0;

public:
	Scene();
	virtual ~Scene() = default;
	virtual short run() = 0;
};