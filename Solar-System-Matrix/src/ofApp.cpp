#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofSetBackgroundColor(0);

	sol = new Astro(ofVec2f(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2), "imgs/sol.png");
	terra = new Astro(ofVec2f(0, 300), "imgs/terra.png");
	lua = new Astro(ofVec2f(0, 100), "imgs/lua.png");

	anguloTerra = 0;
	anguloLua = 0;

	for (int i = 0; i < QUANTIDADE; i++)
		estrelas[i] = ofVec2f(rand() % ofGetWidth(), rand() % ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
	anguloTerra += 1.2f; //terra dar uma volta a cada 5 segundos - (360 / 5) / 60
	anguloLua += 6.0f; //lua dar uma volta a cada 1 segundo - 360 / 60 (framerate)

	if (anguloTerra >= 360)
		anguloTerra = 0;

	if (anguloLua >= 360)
		anguloLua = 0;
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < QUANTIDADE; i++)
		ofDrawCircle(estrelas[i].x, estrelas[i].y, 1 + rand() % 2);

	sol->Draw();

	ofTranslate(sol->GetPosicao()); //centro de coordenadas agora no sol - heliocentrismo
	ofRotate(anguloTerra, 0, 0, 1);
	
	terra->Draw();	

	ofTranslate(terra->GetPosicao());
	ofRotate(anguloLua, 0, 0, 1);

	lua->Draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
