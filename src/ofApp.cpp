#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    sender.setup(RECIEVER_ADDR, RECIEVER_PORT);
    helvetica.loadFont("Helvetica Neue", 14);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == 'j' || key == 'k' || key == 'l') {
        ofxOscMessage m;
        m.setAddress("/key/released");
        m.addInt64Arg(key);
        sender.sendMessage(m);
//        helvetica.drawString(, 10, 10);
//        cout << "Pressed key: " << key << "\n";
    }
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
