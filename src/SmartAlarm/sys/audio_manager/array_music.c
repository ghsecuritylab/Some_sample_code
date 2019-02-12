/* 
 * ESPRESSIF MIT License 
 * 
 * Copyright (c) 2018 <ESPRESSIF SYSTEMS (SHANGHAI) PTE LTD> 
 * 
 * Permission is hereby granted for use on all ESPRESSIF SYSTEMS products, in which case, 
 * it is free of charge, to any person obtaining a copy of this software and associated 
 * documentation files (the "Software"), to deal in the Software without restriction, including 
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished 
 * to do so, subject to the following conditions: 
 * 
 * The above copyright notice and this permission notice shall be included in all copies or 
 * substantial portions of the Software. 
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS 
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR 
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER 
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN 
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 
 * 
 */

#include "array_music.h"
FLASH_MUSIC_DATA_T flash_music_array[] = {0};

int get_flash_music_max_subscript()
{
    return sizeof(flash_music_array) / sizeof(FLASH_MUSIC_DATA_T) - 1;
}

char *get_flash_music_data(int index)
{
    return flash_music_array[index].audio_data;
}

char *get_flash_music_name(int index)
{
    return flash_music_array[index].audio_name;
}

int get_flash_music_size(int index)
{
    return flash_music_array[index].audio_len;
}