#include <CFakeMicWavPlayerLib.h>

int main(int argc, char *argv[]) {
	if (fkmp_initwithsinkinput("random music player", "random source", "random sinks",
			"random source process binary") != 0)
		return 1;
	if (fkmp_initwithaudiofile("random file.ogg", "random source", "random sinks",
		"random source process binary") != 0)
		return 1;

	if (fkmp_set_source_volume(90.0) != 0)
		return 1;

	if (fkmp_set_user_volume(40.0) != 0)
		return 1;
	
	while (fkmp_playnonblocking() == 0);
	fkmp_cleanplayer();
	fkmp_clean();
	return 0;
}
