#include "ofApp.h"
#include "ofEvents.h"
#include "ofGraphics.h"

//--------------------------------------------------------------
void ofApp::setup() {

	x = 200;
	y = 300;
	w = 250;
	h = 430;
	state = false;
}

//--------------------------------------------------------------
void ofApp::update() {

	int mouseX = ofGetMouseX();
	int mouseY = ofGetMouseY();

	if (mouseX > x && mouseX < x + w && mouseY > y && mouseY < y + h) {
		state = true;
	} else {
		state = false;
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	if (state == true) {
		ofSetColor(0, 255, 0);
	} else {
		ofSetColor(0255, 0, 0);
	}
	ofDrawRectangle(x, y, w, h);
}

//--------------------------------------------------------------
void ofApp::exit() {
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY) {
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {
}
