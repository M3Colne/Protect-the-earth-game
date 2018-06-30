#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Player.h"
#include "Lasers.h"
#include "Enemys.h"
#include "FrameTimer.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawStartMenu(int x, int y);
	void DrawGameOver(int x, int y);
	void DrawGameWon(int x, int y);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	int score = 0;
	int color = 255;

	Player player;

	Lasers laserR;
	Lasers laserL;
	Lasers laserD;
	Lasers laserU;

	Enemy enemyR;
	Enemy enemyL;
	Enemy enemyD;
	Enemy enemyU;

	FrameTimer ft;

	bool StartGame = false;
	bool GameOver = false;
	bool GameWon = false;

	bool laserRF = false;
	bool laserLF = false;
	bool laserDF = false;
	bool laserUF = false;

	bool waitToFire = false;

	bool enemyRS = false;
	bool enemyLS = false;
	bool enemyDS = false;
	bool enemyUS = false;

	bool waitToSpawnR = false;
	bool waitToSpawnL = false;
	bool waitToSpawnD = false;
	bool waitToSpawnU = false;

	bool collisionR = false;
	bool collisionL = false;
	bool collisionD = false;
	bool collisionU = false;
	
	bool inhibitR = false;
	bool inhibitL = false;
	bool inhibitD = false;
	bool inhibitU = false;

	float time_to_spawn_enemy = 0.000f;
	/********************************/
};