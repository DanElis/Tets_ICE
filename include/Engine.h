//
// Created by wer on 14.10.2019.
//

#ifndef UNTITLED_ENGINE_H
#define UNTITLED_ENGINE_H


class Engine {
public:
    virtual ~Engine()= default;

    virtual bool isSuperheat() = 0;
    virtual void changeValue(float time_sec) = 0;
};


#endif //UNTITLED_ENGINE_H
