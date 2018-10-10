//
//  BioroidUdpTrigger.hpp
//
//  Created by Felix Dollack on 10.10.18.
//

#ifndef ofx_udp_trigger_h
#define ofx_udp_trigger_h

#include "ofMain.h"
#include "ofxNetwork.h"

class UdpTrigger {
public:
    UdpTrigger();
    UdpTrigger(string host_ip);
    void connectToHost();
    void startRecording();
    void stopRecording();
    void sendTrigger();
    void sendTrigger(string optionalMessage);
private:
    ofxUDPManager udp;
    string _host_ip = "192.168.1.1";
    int _port = 65500;
};

#endif /* ofx_udp_trigger_h */
