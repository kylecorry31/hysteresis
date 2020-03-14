#ifndef Hysteresis_h
#define Hysteresis_h

class HysteresisController {

    public:
        HysteresisController(float onThreshold, float offThreshold);
        bool calculate(float input);
    private:
        bool wasOn_ = false;
        float onThreshold_;
        float offThreshold_;

};

#endif