/**
 * @file Application.h
 * @brief The main running class in the game.
 */

#pragma once

#include "sead/heap.h"

class RootTask;

class Application : public sead::IDisposer
{
public:

    class SingletonDisposer_ : public sead::IDisposer
    {
    public:
        virtual ~SingletonDisposer_();
    };

    Application();

    static Application* createInstance(sead::Heap *);
    static void deleteInstance();
    void init(s32, char **);
    void run();
    RootTask* getRootTask() const;

    u64* _20;
    u64* _28;
    u64 _30;
    u64 _38;

    static Application* sInstance;
};

class ApplicationFunction
{
public:
    static void initialize(s32, char**);
};