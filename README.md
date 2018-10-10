# ofx_udp_trigger
A udp trigger for use in openframeworks projects

This repository contains a c++ class to be used withing a openframeworks project.

## Dependencies
* [openframeworks](https://openframeworks.cc) version 0.9.x or higher

## Example

```CPP
UdpTrigger trigger;       // create an instance of udp trigger
trigger.connectToHost();  // creates a udp connection
trigger.startRecording(); // sends the word RECORD
trigger.sendTrigger();    // sends the word TRIGGER
trigger.stopRecording();  // sends the word STOP
```
