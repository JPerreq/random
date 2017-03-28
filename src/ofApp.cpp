#include "ofApp.h"
#include <random>
using namespace std;


//--------------------------------------------------------------
void ofApp::setup(){
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
//edit began here
random_device rd;
mt19937 eng1(rd());
float meanX = 1000;
float sd = 15;
float meanY = 800;
normal_distribution<> normX(meanX, sd);
normal_distribution<> normY(meanY, sd);
for (int m =0; m<20 ; m++)
{
	X.push_back(normX(eng1));
}
for (int n =0; n<20 ; n++)
{
	Y.push_back(normY(eng1));
}

}
//edit end here

/*Uniform
random_device rd;
mt19937 eng1(rd());
int min = 0;
int max = 1200;
uniform_int_distribution<> unifrm(min,max);
for (int m =0; m<20 ; m++)
{
	X.push_back(unifrm(eng1));
}
for (int n =0; n<20 ; n++)
{
	Y.push_back(unifrm(eng1));
}

*/

/*ORIGINAL
X = {500, 1000, 30, 100, 300, 200, 750};// set of x-coordinates for jewel
Y = {630, 400, 900,40, 200, 0, 90, 30}; //set of y-coordinates for jewel*/


//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
 }
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
