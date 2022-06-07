int retro_video_overclock_timer = 0;
int retro_video_overclock_count = 0;


int get_video_overclock_timer()
{
	if (retro_video_overclock_timer == 0)
		return 0;
  
	retro_video_overclock_count--;
	if (retro_video_overclock_count <= 0)
	{
		retro_video_overclock_count = retro_video_overclock_timer;

		return 0;
	}

	return 1;
}
