#pragma once

#include "ofMain.h"

#include "ofxCv.h"

#undef Success
#include "ofxPCL.h"

class testApp : public ofBaseApp
{

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	
	ofEasyCam cam;
	vector<ofVboMesh> meshes;
	vector<ofVboMesh>::iterator mit;

	cv::Mat camIntrinsic, proIntrinsic, proExtrinsic;
	ofxCv::Intrinsics camCalibration, proCalibration;
	cv::Size camSize, proSize;
	
	enum CameraMode {EASYCAM_MODE, PRO_MODE, CAM_MODE};
	CameraMode cameraMode;
	
	int cw, ch;
	
	string rootDir;	
};
