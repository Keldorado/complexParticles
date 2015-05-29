#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Params.h"
#include "ofxGui.h"
//#include "Colors.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    Params param;
    ofColor myColor; 
    vector<Particle> p;
    ofFbo fbo;
    float history, time0, bornRate, bornCount;
    ofxPanel gui;
    ofxFloatSlider forceSlide;
    ofxFloatSlider colorSlide;
    
    void forceChanged(float & forceSlide);
    void colorChanged(float & colorSide);
    
		
};
