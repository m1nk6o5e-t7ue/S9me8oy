#define RETRO_SETVARS_VOLUME_LEVEL \
    { \
        "sameboy_master_volume", \
        "Audio - Master Volume", \
        "Master Volume", \
        "Change master volume level.", \
        NULL, \
        "audio", \
        { \
            { "0",   "0%" }, \
            { "5",   "5%" }, \
            { "10",  "10%" }, \
            { "15",  "15%" }, \
            { "20",  "20%" }, \
            { "25",  "25%" }, \
            { "30",  "30%" }, \
            { "35",  "35%" }, \
            { "40",  "40%" }, \
            { "45",  "45%" }, \
            { "50",  "50%" }, \
            { "55",  "55%" }, \
            { "60",  "60%" }, \
            { "65",  "65%" }, \
            { "70",  "70%" }, \
            { "75",  "75%" }, \
            { "80",  "80%" }, \
            { "85",  "85%" }, \
            { "90",  "90%" }, \
            { "95",  "95%" }, \
            { "100", "100%" }, \
            { "105", "105%" }, \
            { "110", "110%" }, \
            { "115", "115%" }, \
            { "120", "120%" }, \
            { "125", "125%" }, \
            { "130", "130%" }, \
            { "135", "135%" }, \
            { "140", "140%" }, \
            { "145", "145%" }, \
            { "150", "150%" }, \
            { "155", "155%" }, \
            { "160", "160%" }, \
            { "165", "165%" }, \
            { "170", "170%" }, \
            { "175", "175%" }, \
            { "180", "180%" }, \
            { "185", "185%" }, \
            { "190", "190%" }, \
            { "195", "195%" }, \
            { "200", "200%" }, \
            { NULL, NULL }, \
        }, \
        "100" \
    },



#define RETRO_GETVARS_VOLUME_LEVEL \
        var.key = "sameboy_master_volume"; \
        var.value = NULL; \
        if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value) { \
            retro_master_volume = atoi(var.value); \
        }



extern int retro_master_volume;
