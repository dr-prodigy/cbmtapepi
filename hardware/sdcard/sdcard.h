
// Marcel Timm, RhinoDevel, 2019sep04

// Originally taken from: https://raw.githubusercontent.com/moizumi99/RPiHaribote/master/haribote/sdcard.h

#ifndef MT_SDCARD
#define MT_SDCARD

#define SD_OK                0
#define SD_ERROR             1
#define SD_TIMEOUT           2
#define SD_BUSY              3
#define SD_NO_RESP           5
#define SD_ERROR_RESET       6
#define SD_ERROR_CLOCK       7
#define SD_ERROR_VOLTAGE     8
#define SD_ERROR_APP_CMD     9
#define SD_CARD_CHANGED      10
#define SD_CARD_ABSENT       11
#define SD_CARD_REINSERTED   12

#define SD_READ_BLOCKS       0
#define SD_WRITE_BLOCKS      1

int sdcard_init();
int sdcard_card_init();
//int sdReadSingleBlock( long long address, unsigned char* buffer );
//int sdWriteSingleBlock( long long address, unsigned char* buffer );
int sdcard_blocks_transfer( long long address, int num, unsigned char* buffer, int write );
int sdcard_blocks_clear( long long address, int num );

#endif //MT_SDCARD
