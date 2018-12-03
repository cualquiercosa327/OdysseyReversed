#pragma once

#include "types.h"

namespace al
{
    class AudioDirector
    {
        public:
        AudioDirector();

        u64 _8;
        u64 _10;
        u64 _18;
        u64 _20;
        u64 _28;
        u64 _30;
        u64 _38;
        u64 _40;
        u64 _48;
        void* _50; // something created of size 0x10
        u64 _60;
        u64 _68;
    };

    struct AudioDirectorInitInfo
    {
        u64* _0;
        u64 _8;
        u64 _10;
        u32 _18;
        u32 _1C;
        u64 _20;
        // al::SeDirectorInitInfo at 0x28
        // al::BgmDirectorInitInfo at 0x90
    };
};