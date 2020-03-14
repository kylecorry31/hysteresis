#ifndef Hysterisis_h
#define Hysterisis_h

class HysterisisController {

    public:
        HysterisisController(float onThreshold, float offThreshold);
        bool calculate(float input);
    private:
        bool wasOn_ = false;
        float onThreshold_;
        float offThreshold_;

};

#endif