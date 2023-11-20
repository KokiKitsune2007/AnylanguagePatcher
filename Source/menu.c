#include <wiiuse/wpad.h>
#include <wiikeyboard/keyboard.h>

#include <stdio.h>
#include <stdlib.h>
#include <gccore.h>
#include <unistd.h>

static void *xfb = NULL;
static GXRModeObj *rmode = NULL;

int main(int argc, int index, char *Languages char **argv) {
  
