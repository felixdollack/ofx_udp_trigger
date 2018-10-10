//
//  ofx_udp_trigger.cpp
//
//  Created by Felix Dollack on 10.10.18.
//

#include "ofx_udp_trigger.h"

UdpTrigger::UdpTrigger() : UdpTrigger("192.168.1.1") {};
UdpTrigger::UdpTrigger(string host_ip) {
    this->_host_ip = host_ip;
}

void UdpTrigger::connectToHost() {
    udp.Create();
    udp.Connect(this->_host_ip.c_str(), this->_port);
    udp.SetNonBlocking(true);
}

void UdpTrigger::startRecording() {
    string msg = "RECORD";
    udp.Send(msg.c_str(), msg.length());
}
void UdpTrigger::stopRecording() {
    string msg = "STOP";
    udp.Send(msg.c_str(), msg.length());
}
void UdpTrigger::sendTrigger() {
    sendTrigger("");
}
void UdpTrigger::sendTrigger(string optionalMessage) {
    string msg = "TRIGGER" + optionalMessage;
    udp.Send(msg.c_str(), msg.length());
}
