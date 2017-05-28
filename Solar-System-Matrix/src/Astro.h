#pragma once

#include "ofMain.h"

class Astro
{
private:
	ofImage m_img;

	ofVec2f m_posicao;

public:
	Astro(ofVec2f posicao, string path);
	~Astro();

	void Draw();

	void SetPosicao(ofVec2f posicao);
	ofVec2f GetPosicao();
	
};

