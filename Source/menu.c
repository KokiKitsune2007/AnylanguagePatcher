//main code for interface
#include <wiiuse/wpad.h>
#include <wiikeyboard/keyboard.h>

#include <stdio.h>
#include <stdlib.h>
#include <gccore.h>
#include <unistd.h>

static void *xfb = NULL;
static GXRModeObj *rmode = NULL;

clrscr = 0;

void Initialise() {
  
	VIDEO_Init();
	WPAD_Init();
	PAD_Init();
 
	rmode = VIDEO_GetPreferredMode(NULL);

	xfb = MEM_K0_TO_K1(SYS_AllocateFramebuffer(rmode));
	console_init(xfb,20,20,rmode->fbWidth,rmode->xfbHeight,rmode->fbWidth*VI_DISPLAY_PIX_SZ);
 
	VIDEO_Configure(rmode);
	VIDEO_SetNextFramebuffer(xfb);
	VIDEO_SetBlack(FALSE);
	VIDEO_Flush();
	VIDEO_WaitVSync();
	if(rmode->viTVMode&VI_NON_INTERLACE) VIDEO_WaitVSync();
}
int main(int argc, int index, char *Languages char **argv) {
 printf("------------------------------------------------------\n");
 printf("AnyLanguage Patcher v1.0 by Koki                      \n");
 printf("------------------------------------------------------\n");
 printf("Current language: PLaCEHOLDER\n");
 printf("Selected language: %c\n");
 printf("-------------------------------
