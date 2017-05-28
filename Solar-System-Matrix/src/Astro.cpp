#include "Astro.h"

Astro::Astro(ofVec2f posicao, string path)
{
	m_posicao = posicao;
	m_img.loadImage(path);
}

Astro::~Astro()
{
}

void Astro::Draw()
{
	m_img.setAnchorPercent(0.5, 0.5);
	m_img.draw(m_posicao);
}

void Astro::SetPosicao(ofVec2f posicao)
{
	m_posicao = posicao;
}

ofVec2f Astro::GetPosicao()
{
	return m_posicao;
}