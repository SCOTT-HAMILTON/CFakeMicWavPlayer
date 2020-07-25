#ifndef CFAKE_MIC_WAV_PLAYER_LIB_H
#define CFAKE_MIC_WAV_PLAYER_LIB_H

#ifdef __cplusplus
extern "C" {
#endif
int fkmp_initwithaudiofile(const char* fileName,
							const char* source,
							const char* combinedSlavesList,
							const char* sourceProcessBinary);
int fkmp_initwithsinkinput(const char* sinkInputName,
							const char* source,
							const char* combinedSlavesList,
							const char* sourceProcessBinary);
int fkmp_playnonblocking();
int fkmp_cleanplayer();
int fkmp_set_source_volume(double volume);
int fkmp_set_user_volume(double volume);
void fkmp_clean();

#ifdef __cplusplus
};
#endif

#endif //CFAKE_MIC_WAV_PLAYER_LIB_H
