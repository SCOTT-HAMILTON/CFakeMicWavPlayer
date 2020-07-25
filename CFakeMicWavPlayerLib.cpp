#include "CFakeMicWavPlayerLib.h"
#include <FakeMicWavPlayerLib.h>

extern "C"  {
int fkmp_initwithaudiofile(const char* fileName,
							const char* source,
							const char* combinedSlavesList,
							const char* sourceProcessBinary) {
	return FakeMicWavPlayer::initWithAudioFile(fileName,
											source,
											combinedSlavesList,
											sourceProcessBinary);
}
int fkmp_initwithsinkinput(const char* sinkInputName,
							const char* source,
							const char* combinedSlavesList,
							const char* sourceProcessBinary) {
	return FakeMicWavPlayer::initWithSinkInput(sinkInputName,
											source,
											combinedSlavesList,
											sourceProcessBinary);
}
int fkmp_playnonblocking() {
	return FakeMicWavPlayer::playNonBlocking();
}
int fkmp_cleanplayer() {
	return FakeMicWavPlayer::cleanPlayer();
}
int fkmp_set_source_volume(double volume) {
	return FakeMicWavPlayer::set_source_volume(volume);
}
int fkmp_set_user_volume(double volume) {
	return FakeMicWavPlayer::set_user_volume(volume);
}
void fkmp_clean() {
	FakeMicWavPlayer::clean();
}
}
