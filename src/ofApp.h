#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();
    
    void createSegmentedMesh(const ofVec3f& center,
                             double radius,
                             int precision,
                             double theta1, double theta2,
                             double phi1, double phi2);
    
    void createSphere(ofVboMesh *vbo,
                             float radius,
                             unsigned int rings,
                             unsigned int sectors);

    
    void calculateFrustumSphereIntersects(double fov,
                                          double ratio,
                                          double * latMin,
                                          double * latMax,
                                          double * longMin,
                                          double * longMax);
    
    void drawFrustum();

    void keyPressed(int key);
    void keyReleased(int key);
    
    ofMesh mesh;
    ofEasyCam cam;
    
    double latMin, latMax;
    double longMin, longMax;
    
    double fov, ratio, precision, radius;
    
    ofImage img;
};
