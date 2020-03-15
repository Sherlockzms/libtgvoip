//
// Created by Grishka on 01.04.17.
//

#ifndef LIBTGVOIP_RESAMPLER_H
#define LIBTGVOIP_RESAMPLER_H

#include <stdint.h>
#include <stdlib.h>

namespace tgvoip
{
namespace audio
{
    class Resampler
    {
    public:
        static size_t Convert48To44(int16_t* from, int16_t* to, size_t fromLen, size_t toLen);
        static size_t Convert44To48(int16_t* from, int16_t* to, size_t fromLen, size_t toLen);
        static size_t Convert(int16_t* from, int16_t* to, size_t fromLen, size_t toLen, size_t num, size_t denom);
        static void Rescale60To80(int16_t* in, int16_t* out);
        static void Rescale60To40(int16_t* in, int16_t* out);
    };
} // namespace audio
} // namespace tgvoip

#endif //LIBTGVOIP_RESAMPLER_H
