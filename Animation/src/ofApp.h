#pragma once

#include "ofMain.h"
#include "ofxEasing.h"
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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        void rotateScreen(int center_x,int center_y,int angle);
        void triangle(int x,int y,float r);
        void circle_rotate(int x,int y,float r,float angle);
        void circle_outline(int x,int y,float r,float angle);
    
    float initTime;
    ofVideoPlayer player;
		
};
