

#include <SDL.h>
#include <SDL_thread.h>

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


#include <limits.h>
#include <unistd.h>
#include <pwd.h>


#define _max(a,b) (((a)>(b))?(a):(b))   // developer: 'max' was a global define, so it was replaced to '_max'
#define _min(a,b) (((a)<(b))?(a):(b))   // developer: 'min' was a global define, so it was replaced to '_min'

#define SCREEN_W 800
#define SCREEN_H 480



