// Frederico Ferreira 2021217116


#pragma once

#include "ofMain.h"
#include "extras.h"
#include "drawing_extras.h"
#include "cam_extras_solution.h"
#include "skyscraper.h"
#include "blackhole.h"

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
		
		//floor
		GLint resX, resY;
		GLfloat floorWidth, floorHeight, floorHeightPos;

		//base
		GLfloat baseWidthMax, baseWidthMin, baseWidth;
		GLfloat baseHeightMin, baseHeightMax, baseHeight;
		GLfloat baseDepthMax, baseDepthMin;
		GLfloat R, G, B;
		GLint basePosGridX, basePosGridY;
		ofVec3f basePos;

		std::vector<std::vector<Skyscraper>> baseGrid;
		Blackhole blackhole;

		GLint reset;
		bool grid;

		//view
		GLint view;
		bool lens = true;
		GLint mesh;
		GLint lookDistance;
		GLdouble count;

		// FPS
		GLdouble maxFPS;
		GLdouble maxPeriod;
		GLdouble lastTime;

		//camera
		GLdouble angle, dis_z;
		GLdouble inc_angle, inc_z;

};
