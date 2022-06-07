#define RETRO_SETVARS_VIDEO_OVERCLOCK \
    { \
        "sameboy_video_overclock", \
        "Video - Scanline Overclock", \
        "Scanline overclock", \
        "Add extra scanlines to video frame time.", \
        NULL, \
        "video", \
        { \
            { "100", "100%" }, \
            { "150", "150%" }, \
            { "200", "200%" }, \
            { "250", "250%" }, \
            { "300", "300%" }, \
            { "350", "350%" }, \
            { "400", "400%" }, \
            { "450", "450%" }, \
            { "500", "500%" }, \
            { NULL, NULL }, \
        }, \
        "100" \
    },



#define RETRO_GETVARS_VIDEO_OVERCLOCK \
        var.key = "sameboy_video_overclock"; \
        var.value = NULL; \
        if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value) { \
            retro_video_overclock_timer = ((atoi(var.value) - 100) * 154) / 100; \
            retro_video_overclock_count = 0; \
        }



extern int retro_video_overclock_timer;
extern int retro_video_overclock_count;

