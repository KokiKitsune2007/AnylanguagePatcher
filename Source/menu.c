//main code for interface
#include <wiiuse/wpad.h>
#include <wiikeyboard/keyboard.h>

#include <stdio.h>
#include <stdlib.h>
#include <gccore.h>
#include <unistd.h>
#include <wiilight.h>

#define ITEMS 12

static void *xfb = NULL;
static GXRModeObj *rmode = NULL;

char page_contents[ITEMS][64]
char languages[][11] = {"Japanese  ","English  ", "German  ", "French  ", "Spanish  ", "Italian  ", "Dutch  "};

void getLanguage(void) {
int ret; 
language = SYSCONF_GetLanguage();
if (lang < 0) {
	printf("unable to get language settings aborting...\n")
		exit(0);
}
}
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
int main(int argc, char **argv) {
 printf("------------------------------------------------------\n");
 printf("AnyLanguage Patcher v1.0 by Koki                      \n");
 printf("------------------------------------------------------\n");
 printf("----CONTROLS------------------------------------------\n");
 printf("Browse | DPAD, Exit | HOME, Select | A\n");
 printf("------------------------------------------------------\n");

 printf("------------------------------------------------------\n");

u32 buttonsDown = WPAD_buttonsDown(0);
if (pressed & WPAD_BUTTON_A) {
	// More code will come soon...
}
}
if (pressed & WPAD_BUTTON_HOME) {
clrscr(0);
printf("Home button pressed, peace!");
exit(0);
}
