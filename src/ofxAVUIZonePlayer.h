//
//  ofxAVUIZonePlayer.h
//
//  Created by Borut Kumperscak on 01/03/2016.
//
//

#ifndef ofxAVUIZonePlayer_h
#define ofxAVUIZonePlayer_h

#include "ofMain.h"
#include "ofxMaxim.h"

class ofxAVUIZonePlayer {
    
    public:
        void setup(string _sound, int bufferSize);
        void trigger(float _speed, float _amplitude);
        void filter(float _val1, float _val2);
        void delay(float _val1, float _val2);
        void play(int pos, double pan);

        //objects
        maxiEnv envelope;
        maxiSample sound;
        maxiMix bus;
        maxiFilter myFilterLoRes, myFilterLoPass;
        maxiDelayline myDelayLine;
    
        //audio streams
        double outputs[2];
        double sampleOut;
        double filtered;
        double delayed;
        float * buffer;

        //properties
        double speed;
        double amplitude;
        bool touched;
        bool looping;
        int myBufferSize;
        int sampleTrigger;

        //filter
        double frequencyLoRes;
        double frequencyLoPass;
        double resonance;
        double filterMix;
        bool filterOn;
    
        //delay
        double size;
        double feedback;
        bool delayOn;

};


#endif /* ofxAVUIZonePlayer_h */
